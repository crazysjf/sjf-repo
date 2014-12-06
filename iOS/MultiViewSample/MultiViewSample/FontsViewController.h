//
//  FontsViewController.h
//  MultiViewSample
//
//  Created by 史 丹丹 on 14/12/5.
//  Copyright (c) 2014年 史 丹丹. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FavoritesList.h"

@interface FontsViewController : UITableViewController
@property (copy, nonatomic) NSArray *familyNames;
@property (assign, nonatomic) CGFloat cellPointSize;
@property (strong, nonatomic) FavoritesList *favoritesList;
@end
