//
//  TYLoding.h
//  TYToast
//
//  Created by TianYang on 15/7/29.
//  Copyright (c) 2015年 Tianyang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBProgressHUD.h"

@interface TYLoding : NSObject

@property (nonatomic,retain)MBProgressHUD *hud;

- (void)showHUDWithText:(NSString *)hudText inView:(UIView *)containerView;

- (void)hideHUDAfterDelay:(float)timeInterval;


@end


/******************************************************************************************

          使用方法如下：
               1、导入 TYLoding.h 的头文件实例化一个对象
                  TYLoding* TYloding = [[TYLoding alloc]init];
               
               2、 [TYloding showHUDWithText:@"菊花下边的提示语" inView:nil]; // 开始转菊花
                   [TYloding hideHUDAfterDelay: 菊花再转几秒之后消失 （float）];
 
******************************************************************************************/