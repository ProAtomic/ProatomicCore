//
//  MKMap+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 8/10/17.
//  Copyright © 2017 Property Atomic Strong SAC. All rights reserved.
//

@import Foundation;

@import CoreLocation;
@import MapKit;

typedef enum : NSUInteger {
    PASMapAppAppleMaps,
    PASMapAppGoogleMaps,
    PASMapAppWaze
} PASMapApp;

typedef enum : NSUInteger {
    PASDirectionsModeDriving,
    PASDirectionsModeTransit,
    PASDirectionsModeBicycling,
    PASDirectionsModeWalking
} PASDirectionsMode;

/**
 Define PAS_APP_EXTENSIONS in preprocessors macros to prevent usage of APIs not available in extensions
 */
@interface MKMap : NSObject

#ifndef PAS_APP_EXTENSIONS
+ (BOOL)canOpenGoogleMapsApp;
+ (BOOL)canOpenWazeApp;
+ (void)showPinInMapApp:(PASMapApp)mapApp withLocation:(CLLocation * __nonnull)location zoom:(NSNumber * __nonnull)zoom name:(NSString * __nonnull)name completionHandler:(void (^ __nullable)(BOOL success))completion;
+ (void)navigateInMapApp:(PASMapApp)mapApp withCallbackCustomAppScheme:(NSString * __nullable)customAppScheme sourceName:(NSString * __nullable)sourceName fromLocation:(CLLocation * __nullable)fromLocation toLocation:(CLLocation * __nonnull)toLocation directionMode:(PASDirectionsMode)directionMode zoom:(NSNumber * __nullable)zoom name:(NSString * __nullable)name completionHandler:(void (^ __nullable)(BOOL success))completion;
#endif

@end
