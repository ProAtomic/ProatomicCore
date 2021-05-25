//
//  PASMath.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 8/10/17.
//  Copyright © 2017 Property Atomic Strong SAC. All rights reserved.
//

@import Foundation;
@import UIKit;

@interface PASMath : NSObject

+ (NSInteger)randomIntegerBetween:(NSUInteger)minBound and:(NSUInteger)maxBound;

+ (CGFloat)degreesToRadians:(CGFloat)degrees;
+ (CGFloat)radiansToDegrees:(CGFloat)radians;

@end
