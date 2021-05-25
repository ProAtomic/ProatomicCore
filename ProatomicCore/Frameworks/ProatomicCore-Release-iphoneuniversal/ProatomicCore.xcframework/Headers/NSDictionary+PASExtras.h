//
//  NSDictionary+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import Foundation;

@interface NSDictionary (PASExtras)

/**
 This method checks if the dictionary has a value with an specified key.
 
 @param key - key value for a Dictionary element
 @return YES or NO
 */
- (BOOL)containsKey:(id)key;

@end
