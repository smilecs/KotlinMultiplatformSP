package com.toggler

import kotlinx.serialization.json.JSON

internal fun String.toConfig(): Config {
    return JSON.parse(Config.serializer(), this)
}

internal const val FILE_NAME = "_config.sb"
internal const val CONFIG_DATA = "CONFIG_DATA"