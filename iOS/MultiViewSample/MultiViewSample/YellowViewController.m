//
//  YellowViewController.m
//  HelloWorld2
//
//  Created by 史 丹丹 on 14/12/3.
//  Copyright (c) 2014年 史 丹丹. All rights reserved.
//

#import "YellowViewController.h"

@interface YellowViewController ()
@property (copy, nonatomic) NSArray *dwarves;
@end

@implementation YellowViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.dwarves = @[@"Sleepy", @"Sneezy", @"Bashful", @"Happy", @"Dopey", @"Thorin", @"Nori", @"Balin", @"Oril"];
//    UITableView *tableView = (id)[self.view viewWithTag:1];
//    UIEdgeInsets contentInset = tableView.contentInset;
//    contentInset.top = 20;
//    [tableView setContentInset:contentInset];
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

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return [self.dwarves count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *simpleTableIdentifier = @"SimpleTableIdentifier";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier: simpleTableIdentifier];
    if (cell == nil) {
        cell = [[UITableViewCell alloc]
                initWithStyle:UITableViewCellStyleSubtitle
                reuseIdentifier:simpleTableIdentifier];
    }
    
    UIImage *image = [UIImage imageNamed:indexPath.row %2 == 0 ? @"Image" : @"April-17"];
    
    cell.imageView.image = image;
    cell.textLabel.text = self.dwarves[indexPath.row];
    
    cell.detailTextLabel.text = [NSString stringWithFormat: @"This is a %@ @line %d", cell.textLabel.text, indexPath.row];
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSString *rowValue = self.dwarves[indexPath.row];
    NSString *message = [[NSString alloc] initWithFormat:
                         @"You selected %@", rowValue];
    UIAlertView *alert = [[UIAlertView alloc]
                          initWithTitle:@"Row Selected!"
                          message:message
                          delegate:nil
                          cancelButtonTitle:@"Yes I Did"
                          otherButtonTitles:nil];
    [alert show];
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
}

@end
