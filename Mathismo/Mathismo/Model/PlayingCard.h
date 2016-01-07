//
//  PlayingCard.h
//  Mathismo
//
//  Created by DAIJIE on 7/1/2016.
//  Copyright © 2016 DAIJIE. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (nonatomic, strong) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
