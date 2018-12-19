package com.toggler

expect class AppConfigImpl : AppConfig {

    override fun writeToCache(json: String)
    override fun getDefault(): String
    override fun getConfig(): Config
    override fun getCache(): String
    override fun saveConfig(json: String)
    override fun restoreDefault()

    companion object {
       // empty object block with actual implementation in platform specific classes
    }
}