//
//  RimeConfigController.h
//  SCU
//
//  Created by Neo on 12/29/12.
//  Copyright (c) 2012 Paradigm X. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RimeConfig.h"

@interface RimeConfigController : NSObject {
    RimeConfig *_defaultConfig;
    RimeConfig *_squirrelConfig;
    RimeConfig *_lunaPinyinConfig;
    RimeConfig *_lunaPinyinFluencyConfig;
    RimeConfig *_wubi86Config;
}

@property BOOL useUSKeyboardLayout;
@property BOOL enableNotifications;
@property BOOL enableBuiltinNotifications;

- (id)init:(RimeConfigError **)error;

+ (NSString *)rimeFolder;
+ (BOOL)checkRimeFolder;

@end
