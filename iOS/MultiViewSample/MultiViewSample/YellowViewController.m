//
//  YellowViewController.m
//  HelloWorld2
//
//  Created by 史 丹丹 on 14/12/3.
//  Copyright (c) 2014年 史 丹丹. All rights reserved.
//

#import "YellowViewController.h"

@interface YellowViewController ()
@property (copy, nonatomic) NSArray *dwarwes;
@end

@implementation YellowViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.dwarwes = @[@"Sleepy", @"Sneezy", @"Bashful", @"Happy"];
    UITableView *tableView = (id)[self.view viewWithTag:1];
//    UIEdgeInsets contentInset = tableView.contentInset;
//    contentInset.top = 20;
//    [tableView setContentInset:contentInset];
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return [self.dwarwes count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *simpleTableIdentifier = @"SimpleTableIdentifier";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier: simpleTableIdentifier];
    if (cell == nil) {
        cell = [[UITableViewCell alloc]
                initWithStyle:UITableViewCellStyleDefault
                reuseIdentifier:simpleTableIdentifier];
    }
    cell.textLabel.text = self.dwarwes[indexPath.row];
    return cell;
}

- (IBAction)yellowButtonPressed {
    UIAlertView *alert =[[UIAlertView alloc]
                         initWithTitle:@"Yellow View Button Pressed"
                         message:@"My message"
                         delegate:nil
                         cancelButtonTitle:@"Yep, iii did"
                         otherButtonTitles:nil];
    [alert show];
}

@end
