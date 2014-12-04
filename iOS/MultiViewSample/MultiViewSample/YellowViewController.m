//
//  YellowViewController.m
//  HelloWorld2
//
//  Created by 史 丹丹 on 14/12/3.
//  Copyright (c) 2014年 史 丹丹. All rights reserved.
//

#import "YellowViewController.h"

@implementation YellowViewController

-(IBAction)yellowButtonPressed {
    UIAlertView *alert =[[UIAlertView alloc]
                         initWithTitle:@"Yellow View Button Pressed"
                         message:@"My message"
                         delegate:nil
                         cancelButtonTitle:@"Yep, iii did"
                         otherButtonTitles:nil];
    [alert show];
}

@end
