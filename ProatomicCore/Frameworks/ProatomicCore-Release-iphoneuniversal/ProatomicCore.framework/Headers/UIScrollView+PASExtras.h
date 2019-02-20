//
//  UIScrollView+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

@interface UIScrollView (PASExtras)

/**
 This method moves the scrollview horizontally to an specified page.
 
 @param page destination page
 @param animated - if the movement will be animated
 @param completion - completion block
 */
- (void)goToPageHorizontal:(NSInteger)page animated:(BOOL)animated completion:(void (^)(void))completion;

/**
 This method moves the scrollview vertically to an specified page.
 
 @param page destination page
 @param animated - if the movement will be animated
 @param completion - completion block
 */
- (void)goToPageVertical:(NSInteger)page animated:(BOOL)animated completion:(void (^)(void))completion;

/**
 This method moves the scrollview horizontally to the next page.
 
 @param animated - if the movement will be animated
 @param completion - completion block
 */
- (void)goToNextPageHorizontalAnimated:(BOOL)animated completion:(void (^)(void))completion;

/**
 This method moves the scrollview horizontally to the previous page.
 
 @param animated - if the movement will be animated
 @param completion - completion block
 */
- (void)goToPreviousPageHorizontalAnimated:(BOOL)animated completion:(void (^)(void))completion;

/**
 This method moves the scrollview vertically to the next page.
 
 @param animated - if the movement will be animated
 @param completion - completion block
 */
- (void)goToNextPageVerticalAnimated:(BOOL)animated completion:(void (^)(void))completion;

/**
 This method moves the scrollview vertically to the previous page.
 
 @param animated - if the movement will be animated
 @param completion - completion block
 */
- (void)goToPreviousPageVerticalAnimated:(BOOL)animated completion:(void (^)(void))completion;

/**
 This method retrieves the current horizontal page
 
 @return NSInteger
 */
- (NSInteger)currentPageHorizontal;

/**
 This method retrieves the current vertical page
 
 @return NSInteger
 */
- (NSInteger)currentPageVertical;

/**
 This method retrieves the number of horizontal pages
 
 @return NSInteger
 */
- (NSInteger)numberOfPagesHorizontal;

/**
 This method retrieves the number of vertical pages
 
 @return NSInteger
 */
- (NSInteger)numberOfPagesVertical;

@end

@interface UIScrollView (PAS_Extras_Deprecated)

- (void)goToPageHorizontal:(int)page completion:(void (^)(BOOL))completion NS_DEPRECATED_IOS(0.1, 0.2.6);

- (void)goToPageVertical:(int)page completion:(void (^)(BOOL))completion NS_DEPRECATED_IOS(0.1, 0.2.6);

- (void)goToNextPageHorizontalWithCompletion:(void (^)(BOOL))completion NS_DEPRECATED_IOS(0.1, 0.2.6);

- (void)goToPreviousPageHorizontalWithCompletion:(void (^)(BOOL))completion NS_DEPRECATED_IOS(0.1, 0.2.6);

- (void)goToNextPageVerticalWithCompletion:(void (^)(BOOL))completion NS_DEPRECATED_IOS(0.1, 0.2.6);

- (void)goToPreviousPageVerticalWithCompletion:(void (^)(BOOL))completion NS_DEPRECATED_IOS(0.1, 0.2.6);

@end
