//
//  UIApplication+PASThirdPartyApps.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 12/12/17.
//  Copyright © 2017 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

typedef enum : NSUInteger {
    PASThirdPartyAppIBK,
    PASThirdPartyAppBCP,
    PASThirdPartyAppBBVAPeru,
    PASThirdPartyAppSBPPeru,
    PASThirdPartyAppBanBifPeru
} PASThirdPartyApp;

@interface UIApplication (PASThirdPartyApps)

#ifndef PAS_APP_EXTENSIONS
+ (BOOL)canOpenThirdPartyApp:(PASThirdPartyApp)thirdPartyApp;
+ (void)openThirdPartyApp:(PASThirdPartyApp)thirdPartyApp completionHandler:(void (^ __nullable)(BOOL success))completion;
#endif

@end
