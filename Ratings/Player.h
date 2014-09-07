//
//  Player.h
//  Ratings
//
//  Created by Michael Henry on 9/7/14.
//  Copyright (c) 2014 Digital Javelina. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
