//
//  RnBgTask.h
//  bgtask
//
//  Created by Ammar on 25/10/2019.
//  Copyright © 2019 Facebook. All rights reserved.
//

#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RnBgTask : NSObject <RCTBridgeModule>

@end

NS_ASSUME_NONNULL_END
