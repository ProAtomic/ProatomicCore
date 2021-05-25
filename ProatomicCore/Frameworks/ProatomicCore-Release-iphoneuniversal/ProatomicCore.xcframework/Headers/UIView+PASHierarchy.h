//
//  UIView+PASHierarchy.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

@interface UIView (PASHierarchy)

/**
 This method retrieves the subview index from a view.
 
 @return NSUInteger
 */
- (NSUInteger)getSubviewIndex;

/**
 This method brings view to front
 */
- (void)bringToFront;

/**
 This method sends view to back
 */
- (void)sendToBack;

/**
 This method brings view one level up in the view hierarchy.
 */
- (void)bringOneLevelUp;

/**
 This method sends view one level down in the view hierarchy.
 */
- (void)sendOneLevelDown;

/**
 This method retrieves whether the view is in front.
 
 @return YES or NO
 */
- (BOOL)isInFront;

/**
 This method retrieves whether the view is at back.
 
 @return YES or NO
 */
- (BOOL)isAtBack;

/**
 This method exchanges view hierarchy with an specific view.
 
 @param swapView - view to exchange positions with.
 */
- (void)swapDepthsWithView:(UIView*)swapView;

/**
 This method retrieves the parent ViewController
 
 @return UIViewController
 */
- (UIViewController*)viewController;

@end
