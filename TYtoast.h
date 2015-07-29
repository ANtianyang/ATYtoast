//
//  TYtoast.h
//  TYToast
//
//  Created by TianYang on 15/7/29.
//  Copyright (c) 2015年 Tianyang. All rights reserved.
//

#import <UIKit/UIKit.h>

#define DEFAULT_DISPLAY_DURATION 2.0f

@interface TYtoast : UIView{
    NSString       * _text;
    UIButton       * _contentView;
    CGFloat          _duration;
}

+ (void)showWithText:(NSString *)text;
+ (void)showWithText:(NSString *)text duration:(CGFloat)duration;

+ (void)showWithText:(NSString *)text topOffset:(CGFloat)topOffset;
+ (void)showWithText:(NSString *)text topOffset:(CGFloat)topOffset duration:(CGFloat)duration;

+ (void)showWithText:(NSString *)text bottomOffset:(CGFloat)bottomOffset;
+ (void)showWithText:(NSString *)text bottomOffset:(CGFloat)bottomOffset duration:(CGFloat)duration;


@end


/******************************************************************************************
 
             使用方法如下：
             1、导入 TYtoast.h
             2、 [JRToast showWithText:@"文案" duration:时间];
             
 ******************************************************************************************/