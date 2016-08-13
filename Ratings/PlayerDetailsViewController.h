//
//  PlayerDetailsViewController.h
//  Ratings
//
//  Created by Michael Henry on 9/7/14.
//  Copyright (c) 2014 Digital Javelina. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PlayerDetailsViewController;

@protocol PlayerDetailsViewControllerDelegate <NSObject>

- (void)playerDetailsViewControllerDidCancel:(PlayerDetailsViewController *)controller;
- (void)playerDetailsViewControllerDidSave:(PlayerDetailsViewController *)controller;

@end

@interface PlayerDetailsViewController : UITableViewController <PlayerDetailsViewControllerDelegate>

@property (nonatomic, weak) id <PlayerDetailsViewControllerDelegate> delegate;

- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;


@end
