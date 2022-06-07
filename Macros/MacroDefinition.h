//
//  MacroDefinition.h
//  ZJInternetHospital
//
//  Created by gulu on 17/8/11.
//  Copyright © 2017年 gulu. All rights reserved.
//

#define ScreenWidth [[UIScreen mainScreen]bounds].size.width
#define ScreenHeight [[UIScreen mainScreen] bounds].size.height
#define WIDTH  self.view.frame.size.width
#define HEIGHT self.view.frame.size.height

#define StatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height

#define KNavBarTinColor_White \
        [self.navigationController.navigationBar setTintColor:[UIColor whiteColor]];\
        [self.navigationController.navigationBar setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor whiteColor]}];\
        [UIApplication sharedApplication].statusBarStyle = UIStatusBarStyleLightContent;

#define KNavBarTinColor_Black \
        [self.navigationController.navigationBar setTintColor:rgb(51,51,51)];\
        [self.navigationController.navigationBar setTitleTextAttributes:@{NSForegroundColorAttributeName:rgb(51,51,51)}];\
        [UIApplication sharedApplication].statusBarStyle = UIStatusBarStyleDefault;

#define AppName [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleDisplayName"]



//NSUserDefaults 实例化
#define USER_DEFAULT [NSUserDefaults standardUserDefaults]

//带有RGBA的颜色设置
#define rgb(r,g,b) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:1.0f]
#define rgba(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]

//读取本地图片
#define LOADIMAGE(file,ext) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:ext]]

//将enum转为字符串
#define EnumToString(enum) [NSString stringWithFormat:@"%d", enum]

#pragma mark - 系统
#define IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

#define isiPhone4 ([[UIScreen mainScreen]bounds].size.height == 480)
#define isiPhone5 ([[UIScreen mainScreen]bounds].size.height == 568)
#define isiPhone6 ([[UIScreen mainScreen]bounds].size.height == 667)
#define isiPhonep ([[UIScreen mainScreen]bounds].size.height == 736)
//判断iPHoneX、iPHoneXs
#define isiPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !IPAD : NO)

#define isiPhoneXs ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !IPAD : NO)

//判断iPHoneXr
#define isiPhoneXr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !IPAD : NO)

//判断iPhoneXs Max
#define isiPhoneXsMax ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !IPAD : NO)


#define isiPhoneX_All ([UIScreen mainScreen].bounds.size.height >= 812 || [UIScreen mainScreen].bounds.size.height >= 896)
#define Height_tapBar (isiPhoneX_All ? 83.0f:49.0f)
#define Height_BottomSafe (isiPhoneX_All? 34.0f:0.0f)
#define NAV_HEIGHT ((isiPhoneX_All ? 44.0f:20.0f)+44)

#define dispatch_async_main_safe(block)\
if ([NSThread isMainThread]) {\
block();\
} else {\
dispatch_async(dispatch_get_main_queue(), block);\
}

#define AppVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define System_Version [[[UIDevice currentDevice] systemVersion] floatValue]
#ifdef DEBUG
#   define DLog(fmt, ...) {NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);}
#   define ELog(err) {if(err) DLog(@"%@", err)}
#else
#   define DLog(...)
#   define ELog(err)
#endif

