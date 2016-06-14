//
//  UITextField+History.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface UITextField (History)

/**
 *  identity of this textfield
 */
@property (retain, nonatomic) NSString *identify;

/**
 *  load textfiled input history
 *
 *  @param identify identity of this textfield
 *
 *  @return the history of it's input
 */
- (NSArray*)loadHistroy;

/**
 *  save current input text
 */
- (void)synchronize;

- (void)showHistory;
- (void)hideHistroy;

- (void)clearHistory;

@end
