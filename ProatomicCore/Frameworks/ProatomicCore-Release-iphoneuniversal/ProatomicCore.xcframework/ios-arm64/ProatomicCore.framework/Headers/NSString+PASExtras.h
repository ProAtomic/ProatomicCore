//
//  NSString+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import Foundation;

@interface NSString (PASExtras)

/**
 This method returns the ASCII encoding for a string
 
 @return NSString
 */
- (NSString *)convertStringToASCII;

/**
 This method returns the string filled with an specified character until the string reaches a maximum number of characters.
 
 @param character - character to fill with
 @param shouldUseLeading - this boolean indicates if the characters should be filled from the left rather than from the right.
 @param totalNumberOfCharacters - the maximum nimber of chatacters
 @return NSString
 */
- (NSString *)fillStringWithCharacter:(NSString *)character atLeading:(BOOL)shouldUseLeading totalNumberOfCharacters:(NSUInteger)totalNumberOfCharacters;

- (NSString *)trimText;

@end
