package com.toggler

import android.content.Context
import java.io.BufferedInputStream
import java.io.FileNotFoundException
import java.lang.IllegalStateException

actual class AppConfigImpl private constructor(
    private val country: String,
    private val context: Context
) : AppConfig {
    private val pref = context.getSharedPreferences("config", Context.MODE_PRIVATE)


    actual override fun writeToCache(json: String) {
        context.openFileOutput(FILE_NAME, Context.MODE_PRIVATE).use {
            it.write(json.toByteArray())
        }
    }

    actual override fun getDefault(): String {
        return BufferedInputStream(context.assets.open("$country.json"))
            .bufferedReader().use {
                it.readText()
            }
    }

    actual override fun getConfig(): Config {
        return pref.getString(FILE_NAME, null)?.toConfig() ?: throw IllegalStateException("Config value not initialised")
    }

    actual override fun getCache(): String {
        return try {
            val file = context.openFileInput(FILE_NAME)
            file.bufferedReader().use {
                it.readText()
            }
        } catch (fne: FileNotFoundException) {
            fne.printStackTrace()
            getDefault()
        }
    }

    actual override fun saveConfig(json: String) {
        pref.edit().putString(CONFIG_DATA, json).apply()
        writeToCache(json)
    }

    actual override fun restoreDefault() {
        pref.edit().putString(CONFIG_DATA, getCache()).apply()
    }

    actual companion object {
        fun create(country: String, context: Context): AppConfig = AppConfigImpl(country, context)

        fun getConfig(context: Context): Config {
            val pref = context.getSharedPreferences("config", Context.MODE_PRIVATE)
            return pref.getString(FILE_NAME, null)?.toConfig() ?: throw IllegalStateException("Config value not initialised")
        }
    }
}