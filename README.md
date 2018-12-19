# Toggler
This library features an `Appconfig` class which exposes
various methods to retrieve the currently active config to be used in the app.
For easy usability the app developer will only need to use at most the `saveConfig` `restoreDefault` and `getConfig` methods.

## saveConfig(json:String)
This method takes in a type of json string gotten from the server and will parse and save it into the platforms cache and default settings location for quick recovery.
## restoreDefault()
This method is provided as a fallback for when a failure occurs when trying to load a config from the server maybe a network request fail or etc. This method loads the apps bundled config into the platform default settings so the app will always have a config to work with.
## getConfig()
This returns the most recently saved config, it checks the cache and if empty picks from the apps bundled resources.

## Usages
The `AppConfig` class has a private constructor so must be created with the singleton object `create`.
#### Note: the create method has varying implementations depending on ios or android. On Ios the method only takes in a `country string`, which should represent the current apps country, and on android the create method takes in a `country string` and an `a context`. Also all country codes should be in lowercase.

```kotlin
AppConfigImpl.create("ug", context)
```

```swift
AppConfigImpl.create("ug")
```

### Config Model
```kotlin
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
```
