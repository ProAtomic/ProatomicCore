//
//  UIImage+PASResize.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

@interface UIImage (PASResize)

/**
 This method retrieves a resized version of an image.
 
 @param dstSize - new size
 @return UIImage
 */
- (UIImage*)resizedImageToSize:(CGSize)dstSize;

/**
 This method retrieves a resized version of an image to fit in an specified bounding size.
 
 @param boundingSize Size of the image destination container
 @param scale determines if the image should be scaled if it's smaller than the container.
 @return UIImage
 */
- (UIImage*)resizedImageToFitInSize:(CGSize)boundingSize scaleIfSmaller:(BOOL)scale;

@end
