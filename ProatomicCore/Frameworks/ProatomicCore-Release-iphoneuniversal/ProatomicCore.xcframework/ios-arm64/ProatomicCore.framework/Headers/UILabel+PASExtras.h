//
//  UILabel+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

@interface UILabel (PASExtras)

#pragma mark - Calculate the size the Multi line Label
/*====================================================================*/

/* Calculate the size of the Multi line Label */

/*====================================================================*/
/**
 *  Returns the size of the Label
 *
 *  @return size of the Label
 */
- (CGSize)sizeOfMultiLineLabel;

- (CGRect)boundingRectForCharacterRange:(NSRange)range;

@end
