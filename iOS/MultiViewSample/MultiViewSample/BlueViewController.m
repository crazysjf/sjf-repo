//
//  BlueViewController.m
//  HelloWorld2
//
//  Created by 史 丹丹 on 14/12/3.
//  Copyright (c) 2014年 史 丹丹. All rights reserved.
//

#import "BlueViewController.h"

@implementation BlueViewController
@synthesize display;

-(IBAction) click1 {
    static int i = 0;
    display.text = [NSString stringWithFormat:@"Text is %i", i++];
}

-(IBAction)blueButtonPressed {
    UIAlertView *alert =[[UIAlertView alloc]
                         initWithTitle:@"Blue View Button Pressed"
                         message:@"My message"
                         delegate:nil
                         cancelButtonTitle:@"Yep, i did"
                         otherButtonTitles:nil];
    [alert show];
}
@end
