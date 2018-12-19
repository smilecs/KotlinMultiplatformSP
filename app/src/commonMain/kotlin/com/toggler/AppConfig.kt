package com.toggler

interface AppConfig {

    public interface Factory {
        public fun create(country: String): AppConfig
    }
    fun writeToCache(json: String)

    fun getDefault(): String

    fun getConfig(): Config

    fun getCache(): String

    fun saveConfig(json: String)

    fun restoreDefault()
}