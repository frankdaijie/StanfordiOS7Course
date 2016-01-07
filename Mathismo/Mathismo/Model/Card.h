//
//  Card.h
//  Mathismo
//
//  Created by DAIJIE on 7/1/2016.
//  Copyright © 2016 DAIJIE. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (nonatomic, strong) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
