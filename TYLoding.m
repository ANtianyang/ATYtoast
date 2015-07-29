//
//  TYLoding.m
//  TYToast
//
//  Created by TianYang on 15/7/29.
//  Copyright (c) 2015年 Tianyang. All rights reserved.
//

#import "TYLoding.h"

@implementation TYLoding

@synthesize hud = _hud;

- (id) init {
    self = [super init];
    if (self) {
        
    }
    return self;
}

- (void)dealloc
{
    if (_hud) {
        [_hud removeFromSuperview];
        _hud = nil;
    }
}


- (void)showHUDWithText:(NSString *)hudText inView:(UIView *)containerView{
    if (containerView == nil) {
        containerView = [[UIApplication sharedApplication] keyWindow];
    }
    
    if (!self.hud) {
        self.hud = [[MBProgressHUD alloc] initWithView:containerView];
        [self.hud setColor:[UIColor colorWithRed:0.106 green:0.110 blue:0.154 alpha:0.900]];
        [self.hud setLabelColor:[UIColor whiteColor]] ;
    }
    self.hud.mode  = MBProgressHUDModeIndeterminate;
    self.hud.labelText = hudText;
    
    [containerView addSubview:self.hud];
    [self.hud show:YES];
}

- (void)hideHUDAfterDelay:(float)timeInterval{
    if (!self.hud) {
        return;
    }
    
    [self performSelector:@selector(removeHUDFromSuperView) withObject:nil afterDelay:timeInterval];
}

- (void)removeHUDFromSuperView{
    [self.hud removeFromSuperview];
    self.hud = nil;
}


@end
