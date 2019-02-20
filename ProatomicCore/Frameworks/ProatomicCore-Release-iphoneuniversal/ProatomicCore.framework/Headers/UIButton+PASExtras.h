//
//  UIButton+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

@interface UIButton (PASExtras)

/**
 *  Set title for ControlStateNormal
 *
 *  @param title for ControlStateNormal
 */

- (void)setTitle:(NSString *)title;
/**
 *  Set title color for ControlStateNormal
 *
 *  @param color for ControlStateNormal
 */

- (void)setTitleColor:(UIColor *)color;
/**
 *  Set backgroud image for ControlStateNormal
 *
 *  @param image for ControlStateNormal
 */

- (void)setBackgroundImage:(UIImage *)image;

/**
 *  Set image for ControlStateNormal
 *
 *  @param image for ControlStateNormal
 */
- (void)setImage:(UIImage *)image;

/**
 *  Add target for UIControlEventTouchUpInside
 *
 *  @param target The target object—that is, the object to which the action message is sent. If this is nil, the responder chain is searched for an object willing to respond to the action message.
 *  @param action A selector identifying an action message. It cannot be NULL.
 */
- (void)addTarget:(id)target action:(SEL)action;

@end
