//
//  NSError+PASExtras.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 8/10/17.
//  Copyright © 2017 Property Atomic Strong SAC. All rights reserved.
//

@import Foundation;

@interface NSError (PASExtras)

+ (instancetype)errorWithCode:(NSInteger)code localizedDescription:(NSString *)localizedDescription userInfo:(NSDictionary *)userInfo;

@end
