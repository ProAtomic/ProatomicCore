//
//  UIApplication+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

typedef enum : NSUInteger {
    PASURLSchemeFacebook,
    PASURLSchemeTwitter,
    PASURLSchemeInstagram
} PASURLScheme;

/**
 Define PAS_APP_EXTENSIONS in preprocessors macros to prevent usage of APIs not available in extensions
 */
NS_ASSUME_NONNULL_BEGIN
@interface UIApplication (PASExtras)
/**
 This method returns the App's version number.
 
 @return NSString
 */
+ (NSString *)versionNumber;

/**
 This method returns the App's build number.
 
 @return NSString
 */
+ (NSString*)buildNumber;

/**
 This method returns the App's version and build number.
 
 @return NSString
 */
+ (NSString*)versionBuildNumber;

#ifndef PAS_APP_EXTENSIONS

+ (void)openPrivacySettingsWithCompletionHandler:(void (^ _Nullable)(BOOL))completion;

+ (void)openAppWithURLScheme:(PASURLScheme)urlScheme withIdentifier:(NSString *)identifier completionHandler:(void (^ __nullable)(BOOL success))completion;

+ (void)callNumber:(NSString *)numberString withAlert:(BOOL)alert completionHandler:(void (^ __nullable)(BOOL success))completion;

/**
 Returns the status bar orientation.
 */
+ (UIInterfaceOrientation)interfaceOrientation;

+ (void)openURL:(NSString *)completeURLString completionHandler:(void (^ __nullable)(BOOL success))completion;
#endif

@end
NS_ASSUME_NONNULL_END

