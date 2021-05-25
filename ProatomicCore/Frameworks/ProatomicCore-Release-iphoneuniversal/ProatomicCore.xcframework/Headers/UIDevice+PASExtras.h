//
//  UIDevice+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 6/16/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

typedef enum : NSUInteger {
    PASDeviceScreenScaleX = 0,
    PASDeviceScreenScale1 = 1,
    PASDeviceScreenScale2 = 2,
    PASDeviceScreenScale3 = 3
} PASDeviceScreenScale;

@interface UIDevice (PASExtras)

/**
 This method retrieves the IP Address from a device in a text format.
 */
- (NSString *)getIPAddress;

/**
 * @return If it's at least iOS 10.
 */
- (BOOL)isAtLeastiOS10;
/**
 * @return If it's at least iOS 9.
 */
- (BOOL)isAtLeastiOS9;
/**
 * @return If it's at least iOS 8.
 */
- (BOOL)isAtLeastiOS8;
/**
 * @return Is at least iOS 7.
 */
- (BOOL)isAtLeastiOS7;
/**
 * @return If it's at least iOS 6.
 */
- (BOOL)isAtLeastiOS6;
/**
 * @return If the device is an iPad.
 */
- (BOOL)isiPad;
/**
 * @return If the device is an iPod.
 */
- (BOOL)isiPod;
/**
 * @return If the device is an iPhone.
 */
- (BOOL)isiPhone;
/**
 *  @return If the screen size is small (iPhone 4 size)
 */
- (BOOL)isDeviceScreenSmallSize;
/**
 *  @return If the screen size is first middle (iPhone 5 size)
 */
- (BOOL)isDeviceScreenFirstMiddleSize;
/**
 *  @return If the screen size is second middle (iPhone 6 size)
 */
- (BOOL)isDeviceScreenSecondMiddleSize;
/**
 *  @return If the screen size is big (iPhone 6 Plus size)
 */
- (BOOL)isDeviceScreenPlusSize;
/**
 Returns the device screen's scale
 */
- (PASDeviceScreenScale)deviceScale;

@end
