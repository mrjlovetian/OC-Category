//
//  NSArray+Block.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Block)
/**
 *  快速遍历数组
 *
 *  @param block 数组元素
 */
- (void)each:(void (^)(id object))block;

/**
 *  快速遍历数据，含有下标
 *
 *  @param block 小标和数组元素
 */
- (void)eachWithIndex:(void (^)(id object, NSUInteger index))block;

/**
 *  map数组排序
 *
 *  @param block
 *
 *  @return
 */
- (NSArray *)map:(id (^)(id object))block;

/**
 *  筛选数组
 *
 *  @param block 筛选条件
 *
 *  @return
 */
- (NSArray *)filter:(BOOL (^)(id object))block;


- (NSArray *)reject:(BOOL (^)(id object))block;

- (id)detect:(BOOL (^)(id object))block;

- (id)reduce:(id (^)(id accumulator, id object))block;

- (id)reduce:(id)initial withBlock:(id (^)(id accumulator, id object))block;
@end
