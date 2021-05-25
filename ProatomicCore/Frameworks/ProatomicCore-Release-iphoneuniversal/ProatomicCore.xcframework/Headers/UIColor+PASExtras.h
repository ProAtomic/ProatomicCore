//
//  UIColor+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

#define Convert_To_RBG(n) ([[NSDecimalNumber decimalNumberWithString:[NSString stringWithFormat:@"%i", n]] decimalNumberByDividingBy:[NSDecimalNumber decimalNumberWithString:@"255"]].floatValue)

#define SUPPORTS_UNDOCUMENTED_API	0

@interface UIColor (PASExtras)

/**
 Model for color spaces.
 */
@property (nonatomic, readonly) CGColorSpaceModel colorSpaceModel;

/**
 Determines whether the CGColor will provide RGB Components.
 */
@property (nonatomic, readonly) BOOL canProvideRGBComponents;

/**
 Red component
 Only valid if canProvideRGBComponents is YES
 */
@property (nonatomic, readonly) CGFloat red;

/**
 Green component
 Only valid if canProvideRGBComponents is YES
 */
@property (nonatomic, readonly) CGFloat green;

/**
 Blue component
 Only valid if canProvideRGBComponents is YES
 */
@property (nonatomic, readonly) CGFloat blue;

/**
 White Component
 Only valid if colorSpaceModel == kCGColorSpaceModelMonochrome
 */
@property (nonatomic, readonly) CGFloat white;

/**
 Alpha Component
 */
@property (nonatomic, readonly) CGFloat alpha;

/**
 rgbHex value expressed in UInt32
 */
@property (nonatomic, readonly) UInt32 rgbHex;

/**
 This method returns the colorSpace string value
 
 @return NSString
 */
- (NSString *)colorSpaceString;

/**
 This method retrieves the array of RGBA components.
 
 @return Array of NSNumbers
 */
- (NSArray *)arrayFromRGBAComponents;

/**
 This method checks whether a serie of rgba components is valid for an RGBA or monochromatic color model space.
 
 @param r Red component
 @param g Green component
 @param b Blue component
 @param a Alpha component
 @return YES or NO
 */
- (BOOL)red:(CGFloat *)r green:(CGFloat *)g blue:(CGFloat *)b alpha:(CGFloat *)a;

/**
 This method retrieves the color with a LuminanceMapping
 
 // http://en.wikipedia.org/wiki/Luma_(video)
 // Y = 0.2126 R + 0.7152 G + 0.0722 B
 
 @return UIColor
 */
- (UIColor *)colorByLuminanceMapping;

/**
 This method retrieves a UIColor by multiplicating it's base color components with specified rgba components.
 
 @param red Red component
 @param green Green component
 @param blue Blue component
 @param alpha Alpha component
 @return UIColor
 */
- (UIColor *)colorByMultiplyingByRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;

/**
 This method retrieves a UIColor by adding to it's base color components with specified rgba components.
 
 @param red Red component
 @param green Green component
 @param blue Blue component
 @param alpha Alpha component
 @return UIColor
 */
- (UIColor *)       colorByAddingRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;

/**
 This method retrieves a lightened color built with specified rgba components.
 
 @param red Red component
 @param green Green component
 @param blue Blue component
 @param alpha Alpha component
 @return UIColor
 */
- (UIColor *) colorByLighteningToRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;

/**
 This method retrieves a darkened color built with specified rgba components.
 
 @param red Red component
 @param green Green component
 @param blue Blue component
 @param alpha Alpha component
 @return UIColor
 */
- (UIColor *)  colorByDarkeningToRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;

/**
 This method retrieves the UIColor multiplying it's rgb components by a single f factor.
 
 @param f multiplication factor
 @return UIColor
 */
- (UIColor *)colorByMultiplyingBy:(CGFloat)f;

/**
 This method retrieves the UIColor adding a single f value to every rgb components.
 
 @param f adding value
 @return UIColor
 */
- (UIColor *)       colorByAdding:(CGFloat)f;

/**
 This method retrieves the UIColor by lightening every rgb components to a single f factor.
 
 @param f lightening factor
 @return UIColor
 */
- (UIColor *) colorByLighteningTo:(CGFloat)f;

/**
 This method retrieves the UIColor by darkening every rgb components to a single f factor.
 
 @param f darkening factor
 @return UIColor
 */
- (UIColor *)  colorByDarkeningTo:(CGFloat)f;

/**
 This method retrieves the UIColor by multiplying with another UIColor.
 */
- (UIColor *)colorByMultiplyingByColor:(UIColor *)color;

/**
 This method retrieves the UIColor by adding another UIColor.
 */
- (UIColor *)       colorByAddingColor:(UIColor *)color;

/**
 This method retrieves the UIColor by lightening to another UIColor.
 */
- (UIColor *) colorByLighteningToColor:(UIColor *)color;

/**
 This method retrieves the UIColor by darkening to another UIColor.
 */
- (UIColor *)  colorByDarkeningToColor:(UIColor *)color;

/**
 This method retrieves the string value rgba components of a UIColor
 
 @return NSString
 */
- (NSString *)stringFromColor;

/**
 This method retrieves hex value string from UIColor
 
 @return NSString
 */
- (NSString *)hexStringFromColor;

/**
 This method retrieves a random color with a constant alpha component.
 
 @param alpha - Alpha constant
 @return UIColor
 */
+ (UIColor *)randomColorWithAlpha:(const float)alpha;

/**
 This method retrieves a color with a constant alpha component.
 
 @param alpha Alpha component
 @param color UIColor
 @return UIColor
 */
+ (UIColor *)colorWithAlpha:(const float)alpha color:(UIColor*)color;

/**
 This method retrieves a color from a string representation of the rgba components of a color
 */
+ (UIColor *)colorWithString:(NSString *)stringToConvert;

/**
 This method retrieves a color from an integer representation of the hex value of a color
 */
+ (UIColor *)colorWithRGBHex:(UInt32)hex;

/**
 This method retrieves a color from a string representation of the hex value of a color
 */
+ (UIColor *)colorWithHexString:(NSString *)stringToConvert;

/**
 This method retrieves a color from a string representation of the CSS name of a color
 */
+ (UIColor *)colorWithName:(NSString *)cssColorName;

@end

#if SUPPORTS_UNDOCUMENTED_API
// UIColor_Undocumented_Expanded
// Methods which rely on undocumented methods of UIColor
@interface UIColor (UIColor_Undocumented_Expanded)
- (NSString *)fetchStyleString;
- (UIColor *)rgbColor; // Via Poltras

@end

#endif // SUPPORTS_UNDOCUMENTED_API
