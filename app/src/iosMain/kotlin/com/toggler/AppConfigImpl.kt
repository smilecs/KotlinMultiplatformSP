package com.toggler

import platform.Foundation.*

actual class AppConfigImpl private constructor(private val country: String) : AppConfig {
    private val delegate: NSUserDefaults = NSUserDefaults.standardUserDefaults()
    private val cache = NSCache()

    actual override fun writeToCache(json: String) {
        cache.setObject(CONFIG_DATA, json)
    }

    actual override fun getDefault(): String {
        val bundle = NSBundle.mainBundle().run {
            pathForResource(country, "json")
        }
        return if (bundle != null) (NSString.stringWithContentsOfFile(bundle) as String)
        else {
            throw IllegalArgumentException()
        }
    }

    actual override fun getConfig(): Config {
        return (delegate.objectForKey(CONFIG_DATA) as String?)?.toConfig() ?: throw IllegalStateException()
    }

    actual override fun getCache(): String {
        val data = cache.objectForKey(CONFIG_DATA)
        return if (data != null) (data as String) else {
            getDefault()
        }
    }

    actual override fun saveConfig(json: String) {
        delegate.setObject(CONFIG_DATA, json)
        writeToCache(json)
    }

    actual override fun restoreDefault() {
        delegate.setObject(CONFIG_DATA, getCache())
    }
   actual companion object {
       fun create(country: String): AppConfig = AppConfigImpl(country)
    }
}