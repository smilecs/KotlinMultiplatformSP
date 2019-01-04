#import <Foundation/Foundation.h>

@class AppConfig, AppAppConfigImpl, AppAppConfigImplCompanion, AppField, AppProperty, AppConfigCompanion, AppConfig$serializer, AppFieldCompanion, AppField$serializer, AppPropertyCompanion, AppProperty$serializer, AppKotlinArray, AppKotlinx_serialization_runtime_nativeEnumDescriptor, AppKotlinx_serialization_runtime_nativeSerialKind, AppKotlinNothing, AppKotlinx_serialization_runtime_nativeUpdateMode, AppKotlinx_serialization_runtime_nativeSerialClassDescImpl, AppKotlinEnum;

@protocol AppAppConfig, AppKotlinx_serialization_runtime_nativeKSerializer, AppKotlinx_serialization_runtime_nativeSerializationStrategy, AppKotlinx_serialization_runtime_nativeEncoder, AppKotlinx_serialization_runtime_nativeSerialDescriptor, AppKotlinx_serialization_runtime_nativeDeserializationStrategy, AppKotlinx_serialization_runtime_nativeDecoder, AppKotlinx_serialization_runtime_nativeCompositeEncoder, AppKotlinx_serialization_runtime_nativeSerialContext, AppKotlinAnnotation, AppKotlinx_serialization_runtime_nativeCompositeDecoder, AppKotlinIterator, AppKotlinx_serialization_runtime_nativeGeneratedSerializer, AppKotlinKClass, AppKotlinComparable, AppKotlinKDeclarationContainer, AppKotlinKAnnotatedElement, AppKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface AppMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface AppMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface AppNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface AppByte : AppNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface AppUByte : AppNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface AppShort : AppNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface AppUShort : AppNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface AppInt : AppNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface AppUInt : AppNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface AppLong : AppNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface AppULong : AppNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface AppFloat : AppNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface AppDouble : AppNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface AppBoolean : AppNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("AppConfig")))
@protocol AppAppConfig
@required
- (void)writeToCacheJson:(NSString *)json __attribute__((swift_name("writeToCache(json:)")));
- (NSString *)getDefault __attribute__((swift_name("getDefault()")));
- (AppConfig *)getConfig __attribute__((swift_name("getConfig()")));
- (NSString *)getCache __attribute__((swift_name("getCache()")));
- (void)saveConfigJson:(NSString *)json __attribute__((swift_name("saveConfig(json:)")));
- (void)restoreDefault __attribute__((swift_name("restoreDefault()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppConfigImpl")))
@interface AppAppConfigImpl : KotlinBase <AppAppConfig>
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppConfigImpl.Companion")))
@interface AppAppConfigImplCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AppAppConfig>)createCountry:(NSString *)country __attribute__((swift_name("create(country:)")));
- (AppConfig *)getConfig __attribute__((swift_name("getConfig()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config")))
@interface AppConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSDictionary<NSString *, AppBoolean *> *feature;
@property NSDictionary<NSString *, AppField *> *fields;
@property NSDictionary<NSString *, AppProperty *> *properties;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config.Companion")))
@interface AppConfigCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AppKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol AppKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeOutput:(id<AppKotlinx_serialization_runtime_nativeEncoder>)output obj:(id _Nullable)obj __attribute__((swift_name("serialize(output:obj:)")));
@property (readonly) id<AppKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol AppKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeInput:(id<AppKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (id _Nullable)patchInput:(id<AppKotlinx_serialization_runtime_nativeDecoder>)input old:(id _Nullable)old __attribute__((swift_name("patch(input:old:)")));
@property (readonly) id<AppKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol AppKotlinx_serialization_runtime_nativeKSerializer <AppKotlinx_serialization_runtime_nativeSerializationStrategy, AppKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config.$serializer")))
@interface AppConfig$serializer : KotlinBase <AppKotlinx_serialization_runtime_nativeKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (AppConfig *)deserializeInput:(id<AppKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (AppConfig *)patchInput:(id<AppKotlinx_serialization_runtime_nativeDecoder>)input old:(AppConfig *)old __attribute__((swift_name("patch(input:old:)")));
- (void)serializeOutput:(id<AppKotlinx_serialization_runtime_nativeEncoder>)output obj:(AppConfig *)obj __attribute__((swift_name("serialize(output:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Field")))
@interface AppField : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t length;
@property NSString *hint;
@property BOOL required;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Field.Companion")))
@interface AppFieldCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AppKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Field.$serializer")))
@interface AppField$serializer : KotlinBase <AppKotlinx_serialization_runtime_nativeKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (AppField *)deserializeInput:(id<AppKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (AppField *)patchInput:(id<AppKotlinx_serialization_runtime_nativeDecoder>)input old:(AppField *)old __attribute__((swift_name("patch(input:old:)")));
- (void)serializeOutput:(id<AppKotlinx_serialization_runtime_nativeEncoder>)output obj:(AppField *)obj __attribute__((swift_name("serialize(output:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Property")))
@interface AppProperty : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSDictionary<NSString *, NSSet<NSString *> *> *item;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Property.Companion")))
@interface AppPropertyCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<AppKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Property.$serializer")))
@interface AppProperty$serializer : KotlinBase <AppKotlinx_serialization_runtime_nativeKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (AppProperty *)deserializeInput:(id<AppKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (AppProperty *)patchInput:(id<AppKotlinx_serialization_runtime_nativeDecoder>)input old:(AppProperty *)old __attribute__((swift_name("patch(input:old:)")));
- (void)serializeOutput:(id<AppKotlinx_serialization_runtime_nativeEncoder>)output obj:(AppProperty *)obj __attribute__((swift_name("serialize(output:obj:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol AppKotlinx_serialization_runtime_nativeEncoder
@required
- (id<AppKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(AppKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<AppKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(AppKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(AppKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSaver:(id<AppKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(saver:value:)")));
- (void)encodeSerializableValueSaver:(id<AppKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(saver:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<AppKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol AppKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<AppKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<AppKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount;
@property (readonly) BOOL isNullable;
@property (readonly) AppKotlinx_serialization_runtime_nativeSerialKind *kind;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol AppKotlinx_serialization_runtime_nativeDecoder
@required
- (id<AppKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(AppKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(AppKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (AppKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueLoader:(id<AppKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeNullableSerializableValue(loader:)")));
- (id _Nullable)decodeSerializableValueLoader:(id<AppKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeSerializableValue(loader:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueLoader:(id<AppKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(loader:old:)")));
- (id _Nullable)updateSerializableValueLoader:(id<AppKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(loader:old:)")));
@property (readonly) id<AppKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) AppKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol AppKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index saver:(id<AppKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:saver:value:)")));
- (void)encodeSerializableElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index saver:(id<AppKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:saver:value:)")));
- (void)encodeShortElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<AppKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface AppKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(AppInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<AppKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface AppKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <AppKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<AppKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<AppKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<AppKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface AppKotlinx_serialization_runtime_nativeEnumDescriptor : AppKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(AppKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<AppKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialContext")))
@protocol AppKotlinx_serialization_runtime_nativeSerialContext
@required
- (id<AppKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getKclass:(id<AppKotlinKClass>)kclass __attribute__((swift_name("get(kclass:)")));
- (id<AppKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getByValueValue:(id)value __attribute__((swift_name("getByValue(value:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol AppKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface AppKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol AppKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<AppKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeNullableSerializableElement(desc:index:loader:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<AppKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeSerializableElement(desc:index:loader:)")));
- (int16_t)decodeShortElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<AppKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:loader:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<AppKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<AppKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:loader:old:)")));
@property (readonly) id<AppKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) AppKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface AppKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol AppKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface AppKotlinEnum : KotlinBase <AppKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(AppKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name;
@property (readonly) int32_t ordinal;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface AppKotlinx_serialization_runtime_nativeUpdateMode : AppKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) AppKotlinx_serialization_runtime_nativeUpdateMode *banned;
@property (class, readonly) AppKotlinx_serialization_runtime_nativeUpdateMode *overwrite;
@property (class, readonly) AppKotlinx_serialization_runtime_nativeUpdateMode *update;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(AppKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol AppKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol AppKotlinx_serialization_runtime_nativeGeneratedSerializer <AppKotlinx_serialization_runtime_nativeKSerializer>
@required
- (AppKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol AppKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol AppKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol AppKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol AppKotlinKClass <AppKotlinKDeclarationContainer, AppKotlinKAnnotatedElement, AppKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName;
@property (readonly) NSString * _Nullable simpleName;
@end;

NS_ASSUME_NONNULL_END
