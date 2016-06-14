//
//  NSArray+Block.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Block)
- (void)each:(void (^)(id object))block;
- (void)eachWithIndex:(void (^)(id object, NSUInteger index))block;
- (NSArray *)map:(id (^)(id object))block;
- (NSArray *)filter:(BOOL (^)(id object))block;
- (NSArray *)reject:(BOOL (^)(id object))block;
- (id)detect:(BOOL (^)(id object))block;
- (id)reduce:(id (^)(id accumulator, id object))block;
- (id)reduce:(id)initial withBlock:(id (^)(id accumulator, id object))block;
@end
