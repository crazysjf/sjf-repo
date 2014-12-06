//
//  FontListViewController.h
//  MultiViewSample
//
//  Created by 史 丹丹 on 14/12/5.
//  Copyright (c) 2014年 史 丹丹. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FontListViewController : UITableViewController

@property (copy, nonatomic) NSArray *fontNames;
@property (assign, nonatomic) BOOL showsFavorites;

@end
