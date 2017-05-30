#pragma once
#ifdef __OBJC__
#include <UIKit/UIKit.h>

@interface uContext : NSObject
- (instancetype)init;
- (BOOL)application:(UIApplication *)application willFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary*)options;
@end

#endif
