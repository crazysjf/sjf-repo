//
//  ViewController.m
//  HelloWorld2
//
//  Created by 史 丹丹 on 14/11/28.
//  Copyright (c) 2014年 史 丹丹. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

@synthesize blueViewController, yellowViewController;


-(IBAction)switchViews:(id)sender {
    [UIView beginAnimations:@"View Flip" context:NULL];
    [UIView setAnimationDuration:0.4];
    [UIView setAnimationCurve:UIViewAnimationCurveEaseInOut];
    [UIView setAnimationTransition:UIViewAnimationTransitionFlipFromRight
                           forView:self.view cache:YES];
    
    if (!self.yellowViewController.view.superview) {
        if (!self.yellowViewController) {
            self.yellowViewController = [self.storyboard
                                         instantiateViewControllerWithIdentifier:@"Yellow"];
        }
        [self.blueViewController.view removeFromSuperview];
        [self.view insertSubview:self.yellowViewController.view atIndex:0];
    } else {
        if (!self.blueViewController) {
            self.blueViewController = [self.storyboard
                                       instantiateViewControllerWithIdentifier:@"Blue"];
        }
        [self.yellowViewController.view removeFromSuperview];
        [self.view insertSubview:self.blueViewController.view atIndex:0];
    }
    [UIView commitAnimations];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.blueViewController = [self.storyboard instantiateViewControllerWithIdentifier: @"Blue"];
    [self.view insertSubview:self.blueViewController.view atIndex:0];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
    if (!self.blueViewController.view.superview) {
        self.blueViewController = nil;
    } else {
        self.yellowViewController = nil;
    }
}

@end
