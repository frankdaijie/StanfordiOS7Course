//
//  Card.m
//  Mathismo
//
//  Created by DAIJIE on 7/1/2016.
//  Copyright © 2016 DAIJIE. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards {
    int score = 0;
    for (Card *card in otherCards) {
        if ([self.contents isEqualToString:card.contents]) {
            score = 1;
        }
    }
    
    return score;
}

@end
