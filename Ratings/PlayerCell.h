//
//  PlayerCell.h
//  Ratings
//
//  Created by Michael Henry on 9/7/14.
//  Copyright (c) 2014 Digital Javelina. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView;

@end
