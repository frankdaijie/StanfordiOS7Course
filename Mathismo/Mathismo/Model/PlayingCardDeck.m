//
//  PlayingDeck.m
//  Mathismo
//
//  Created by DAIJIE on 7/1/2016.
//  Copyright © 2016 DAIJIE. All rights reserved.
//

#import "PlayingCardDeck.h"

@implementation PlayingCardDeck

- (instancetype)init {
    self = [super init];
    
    if (self) {
        for (NSUInteger rank = 1; rank <= [PlayingCard maxRank]; rank++) {
            for (NSString *suit in [PlayingCard validSuits]) {
                PlayingCard *card = [[PlayingCard alloc] init];
                card.rank = rank;
                card.suit = suit;
                [self addCard:card];
            }
        }
    }
    
    return self;
}

@end
