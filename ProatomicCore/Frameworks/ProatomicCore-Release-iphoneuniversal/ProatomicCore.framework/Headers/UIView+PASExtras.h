//
//  UIView+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

@interface UIView (PASExtras)

/**
 This method retrieves the Bottom Y Coordinate
 
 @return NSUInteger
 */
- (NSUInteger)getBottomY;

/**
 This method retrieves the Right X Coordinate
 
 @return NSUInteger
 */
- (NSUInteger)getRightX;

/**
 This method retrieves the Center Coordinates of a view
 
 @return CGPoint
 */
- (CGPoint)getCenterOfView;

/**
 This method removes the keyboard
 */
- (void)removeKeyboard;

/**
 This method initializes the UIView from XIB file
 
 @return id
 */
+ (id)initFromXIB;

/**
 This method initializes the UIVIew from a Nib name
 
 @param classFile - Class File name
 @return UIView
 */
+ (UIView *)viewFromNibName:(Class)classFile;

@end
