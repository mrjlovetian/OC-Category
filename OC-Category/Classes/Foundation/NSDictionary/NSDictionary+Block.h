//
//  NSDictionary+Block.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Block)

#pragma mark - RX
- (void)each:(void (^)(id k, id v))block;
- (void)eachKey:(void (^)(id k))block;
- (void)eachValue:(void (^)(id v))block;
- (NSArray *)map:(id (^)(id key, id value))block;
- (NSDictionary *)pick:(NSArray *)keys;
- (NSDictionary *)omit:(NSArray *)key;

@end
