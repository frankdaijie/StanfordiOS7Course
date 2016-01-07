//
//  Deck.h
//  Mathismo
//
//  Created by DAIJIE on 7/1/2016.
//  Copyright © 2016 DAIJIE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
