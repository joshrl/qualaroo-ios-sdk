// Generated by Apple Swift version 4.1 (swiftlang-902.0.48 clang-902.0.37.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import UIKit;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Qualaroo",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif








/// Main component of SDK
SWIFT_CLASS("_TtC8Qualaroo8Qualaroo")
@interface Qualaroo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end





@class UIViewController;
@protocol QualarooSurveyDelegate;

@interface Qualaroo (SWIFT_EXTENSION(Qualaroo))
/// Instance of Qualaroo class that should be used.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Qualaroo * _Nonnull shared;)
+ (Qualaroo * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// Flag saying if Qualaroo module has been configured
+ (BOOL)isConfigured SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isConfigured SWIFT_WARN_UNUSED_RESULT;
/// Flag saying if Qualaroo module has already finished featching all data, and it’s ready for displaying surveys.
+ (BOOL)isReady SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isReady SWIFT_WARN_UNUSED_RESULT;
/// You need to call this method on Qualaroo.shared to create and configure main component with given credentials.
/// \param apiKey String that authenticate user. You can get it from https://app.qualaroo.com/dashboard by tapping on
/// “Setup” when you expand selected site/application.
///
/// \param autotracking Flag that decide if survey should be shown on controller with same class name or title as
/// survey name (alias) without any ‘showSurvey’ call. By default it’s true.
///
- (void)configureWithApiKey:(NSString * _Nonnull)apiKey autotracking:(BOOL)autotracking SWIFT_DEPRECATED_MSG("\n  This method will be removed in future releases, please use 'configure(with:)' instead.\n  \n  Keep in mind that calling 'configure(with:)' will not turn AutoShow (formerly Autotracking) on  by default, in opposition to 'configure(withApiKey:autotracking:)'.\n  If you want to enable AutoShow - call 'turnOnAutoShow()'.\n  ");
/// You need to call this method on Qualaroo.shared to create and configure main component with given credentials.
/// \param apiKey String that authenticate user. You can get it from https://app.qualaroo.com/dashboard by tapping on
/// “Setup” when you expand selected site/application.
///
- (void)configureWith:(NSString * _Nonnull)apiKey;
/// Calling this function forces SDK to refresh survey list and schedules next survey update in 1 hour.
- (void)updateSurveysNow;
/// Set dafault language that you want to use for surveys. If survey won’t support preferred language it will try
/// to use english, if it’s also not supported then it will use first one from supported languages.
/// \param language String that is valid ISO 639-1 Language Code. Currently Qualaroo is not supporting ISO
/// Country Codes. Example “en” or “fr”. Not supported “en-AU” or “fr-CA”.
///
- (BOOL)setPreferredSurveysLanguage:(NSString * _Nonnull)language error:(NSError * _Nullable * _Nullable)error;
/// Way to set default image of logo used on surveys.
/// If not set it will use application icon, or qualaroo logo if application icon is unavailable.
/// Keep in mind it will be overriden by logo set in the dashboard.
/// \param name Name of UIImage we want to use for logo.
///
- (void)setDefaultLogoWithName:(NSString * _Nonnull)name;
/// Way to identify user. This ID will be sent with every response user gave us. Can be changed between surveys.
/// \param userID Unique ID of current user.
///
- (void)setUserID:(NSString * _Nonnull)userID;
/// Set custom properties of current user.
/// \param userProperties Dictionary containing additional info about current user. Used for custom survey
/// targeting. Should match schema used by dashboard on web.
///
- (void)setUserProperties:(NSDictionary<NSString *, NSString *> * _Nonnull)userProperties;
/// Add or change one userProperty.
/// \param key String that is used as a key of property we want to add/update.
///
/// \param value New value of property that we are passing.
///
- (void)addUserProperty:(NSString * _Nonnull)key withValue:(NSString * _Nonnull)value;
/// Remove userProperty if there is one. If there is no property with given key nothing happens.
/// \param key String that is used as a key of property we want to remove.
///
- (void)removeUserProperty:(NSString * _Nonnull)key;
/// Gives copy of userProperties.
///
/// returns:
/// Dictionary with previously set userProperties.
- (NSDictionary<NSString *, NSString *> * _Nonnull)userProperties SWIFT_WARN_UNUSED_RESULT;
/// Way to show survey with selected name (alias).
/// \param alias Name of survey we want to show.
/// Check “target” section of survey creation/editing on Qualaroo dashboard.
///
/// \param viewController UIViewController you want to show survey on.
/// If you skip this param or send a nil, survey will be shown on the rootViewController.
/// Otherwise it will try to use a navigationController of a given viewController to present survey view,
/// or viewController itself if there no navigationController available.
/// You need to be careful if with using view controllers that are not full screen.
///
/// \param forced skips all targeting checks if set to true.
/// This will cause the survey to always be shown, as long as it’s active. Use with precaution. Defaults to false.
///
/// \param delegate Object that will receive information about survey starting, dismissing and finishing.
///
- (void)showSurveyWith:(NSString * _Nonnull)alias on:(UIViewController * _Nullable)viewController forced:(BOOL)forced delegate:(id <QualarooSurveyDelegate> _Nullable)delegate;
/// Way to ABTest surveys with selected names (aliases).
/// \param aliases List of survey names that we want to take part in AB test. Proablity of showing specific survey can
/// be set on Qualaroo dashboard, under “Target” tab. Note that targetting options for all surveys (apart from target
/// percent) should be exacly the same if we want AB test to be correct.
///
/// \param viewController UIViewController you want to show survey on.
/// If you skip this param or send a nil, survey will be shown on the rootViewController.
/// Otherwise it will try to use a navigationController of a given viewController to present survey view,
/// or viewController itself if there no navigationController available.
/// You need to be careful if with using view controllers that are not full screen.
///
/// \param forced skips all targeting checks if set to true.
/// This will cause the survey to always be shown, as long as it’s active. Use with precaution. Defaults to false.
///
/// \param delegate Object that will receive information about survey starting, dismissing and finishing.
///
- (void)abTestSurveysWith:(NSArray<NSString *> * _Nonnull)aliases on:(UIViewController * _Nullable)viewController forced:(BOOL)forced delegate:(id <QualarooSurveyDelegate> _Nullable)delegate;
@end

@class UserResponse;

/// Delegate that handles events sent by Survey.
SWIFT_PROTOCOL_NAMED("SurveyDelegate")
@protocol QualarooSurveyDelegate
/// Survey view has loaded.
- (void)surveyDidStart;
/// User has dismissed survey before finishing it.
- (void)surveyDidDismiss;
/// User finished survey (or dismissed it on last message).
- (void)surveyDidFinish;
/// Some internal error occured. Survey was closed and probably not finished.
- (void)surveyDidCloseWithErrorMessage:(NSString * _Nonnull)errorMessage;
@optional
/// Some question will be sending callbacks after user has responded. This method is optional.
- (void)userDidAnswerQuestion:(UserResponse * _Nonnull)response;
@end










/// Class used for getting info about how user answered questions.
SWIFT_CLASS("_TtC8Qualaroo12UserResponse")
@interface UserResponse : NSObject
/// Returns alias of question that user responded to.
///
/// returns:
/// String that is used as identifier of answered question.
- (NSString * _Nonnull)getQuestionAlias SWIFT_WARN_UNUSED_RESULT;
/// Returns array of selected options. If question was radio, dropdown, or NPS type then array contain only one element.
/// For text questions array will contain only element with alias “text”.
///
/// returns:
/// Array of strings that represent selected elements.
- (NSArray<NSString *> * _Nonnull)getFilledElements SWIFT_WARN_UNUSED_RESULT;
/// Returns text associated with selected element.
/// This represents a text answer provided by the user.
/// \param alias Identifier of element we want to check.
///
///
/// returns:
/// Text provided by the user, or nil it there was none.
- (NSString * _Nullable)getElementText:(NSString * _Nonnull)alias SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
