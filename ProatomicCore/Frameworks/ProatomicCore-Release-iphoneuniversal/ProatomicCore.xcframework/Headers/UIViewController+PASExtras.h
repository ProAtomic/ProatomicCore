//
//  UIViewController+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

@interface UIViewController (PASExtras)

#ifndef PAS_APP_EXTENSIONS
/**
 This method retrieves the current presenting view controller
 
 @return UIViewController
 */
+ (UIViewController*)currentPresentedViewController;
#endif

/**
 This method retrieves the last view controller
 
 @return UIViewController
 */
- (UIViewController *)backViewController;

/**
 This method retrieves whether the UIViewController is visible.
 
 @return YES or NO.
 */
- (BOOL)isVisible;

- (void)dismissViewController;

- (BOOL)isModal;

@end

