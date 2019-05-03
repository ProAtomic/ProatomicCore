//
//  PASLoggerHelper.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 3/15/17.
//  Copyright © 2017 Property Atomic Strong SAC. All rights reserved.
//


#if __has_feature(modules)
@import CocoaLumberjack;
@import Foundation;
#else
#import <CocoaLumberjack/CocoaLumberjack.h>
#import <Foundation/Foundation.h>
#endif

//#define IfDebug Debug==1
//#define ReallyDebug if(IfDebug)DDLogVerbose(@"Running %@ '%@'", self.class, NSStringFromSelector(_cmd));

#ifdef DEBUG
const int ddLogLevel = DDLogFlagVerbose | DDLogFlagDebug | DDLogFlagInfo | DDLogFlagWarning | DDLogFlagError;
#else
const int ddLogLevel = DDLogFlagWarning | DDLogFlagError;
#endif

@interface PASLoggerHelper : NSObject

#ifdef DEBUG
+ (void)loadDebuggingInformationOverlay;
#endif

@end
