//
//  FavoritesList.h
//  MultiViewSample
//
//  Created by 史 丹丹 on 14/12/5.
//  Copyright (c) 2014年 史 丹丹. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FavoritesList : NSObject
+ (instancetype)sharedFavoritesList;
- (NSArray *)favorites;
- (void)addFavorite:(id)item;
- (void)removeFavorite:(id)item;
@end
