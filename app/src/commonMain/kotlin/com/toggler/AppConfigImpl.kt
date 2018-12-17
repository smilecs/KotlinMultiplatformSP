package com.toggler

expect class AppConfigImpl : AppConfig {

    class Factory : AppConfig.Factory {
        override fun create(country: String): AppConfig
    }

    override fun writeToCache(json: String)
    override fun getDefault(): String
    override fun getConfig(): Config
    override fun getCache(): String
    override fun saveConfig(json: String)
    override fun restoreDefault()
}