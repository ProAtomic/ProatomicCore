//
//  PASTextValidators.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 8/10/17.
//  Copyright © 2017 Property Atomic Strong SAC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PASTextValidators : NSObject

+ (BOOL)stringIsValid:(NSString *)string withRegex:(NSString *)regex;
+ (BOOL)emailIsValid:(NSString *)email;
+ (BOOL)nameIsValid:(NSString *)name;
+ (BOOL)lastNameIsValid:(NSString *)lastName;
+ (BOOL)dniIsValid:(NSString *)dni;
+ (BOOL)rucIsValid:(long long)ruc;

@end
