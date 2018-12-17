package com.toggler

import kotlinx.serialization.Serializable


@Serializable
class Config {
    var feature: Map<String, Boolean> = mutableMapOf()
    var fields: Map<String, Field> = mutableMapOf()
    var properties: Map<String, Property> = mutableMapOf()

}

@Serializable
class Field {
    var length: Int = 0
    var hint: String = ""
    var required: Boolean = false
}

@Serializable
class Property {
    var item: Map<String, Set<String>> = mutableMapOf()
}