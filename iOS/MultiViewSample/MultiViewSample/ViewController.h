//
//  ViewController.h
//  HelloWorld2
//
//  Created by 史 丹丹 on 14/11/28.
//  Copyright (c) 2014年 史 丹丹. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BlueViewController.h"
#import "YellowViewController.h"

@interface ViewController : UIViewController
@property (strong, nonatomic) BlueViewController *blueViewController;
@property (strong, nonatomic) YellowViewController *yellowViewController;

-(IBAction)switchViews:(id)sender;
@end

