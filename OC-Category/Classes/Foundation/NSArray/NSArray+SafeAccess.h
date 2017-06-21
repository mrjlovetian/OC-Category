//
//  NSArray+SafeAccess.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSArray (SafeAccess)
/**
 *  防止数组越界，选择数组
 *
 *  @param index
 *
 *  @return
 */
-(id)objectWithIndex:(NSUInteger)index;

/**
 *  数组描述，字符串
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (NSString*)stringWithIndex:(NSUInteger)index;

/**
 *  数据描述，数字
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (NSNumber*)numberWithIndex:(NSUInteger)index;

/**
 *  数据描述，小数
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (NSDecimalNumber *)decimalNumberWithIndex:(NSUInteger)index;

/**
 *  数据描述，数组
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (NSArray*)arrayWithIndex:(NSUInteger)index;

/**
 *  数据描述，字典
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (NSDictionary*)dictionaryWithIndex:(NSUInteger)index;

/**
 *  数据描述，数字
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (NSInteger)integerWithIndex:(NSUInteger)index;

/**
 *  数据描述，数字
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (NSUInteger)unsignedIntegerWithIndex:(NSUInteger)index;

/**
 *  数据描述，BOOL
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (BOOL)boolWithIndex:(NSUInteger)index;

/**
 *  数据描述，数字
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (int16_t)int16WithIndex:(NSUInteger)index;

/**
 *  数据描述，数字
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (int32_t)int32WithIndex:(NSUInteger)index;

/**
 *  数据描述，数字
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (int64_t)int64WithIndex:(NSUInteger)index;

/**
 *  数据描述，字符
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (char)charWithIndex:(NSUInteger)index;

/**
 *  数据描述，字符
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (short)shortWithIndex:(NSUInteger)index;

/**
 *  数据描述，小数
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (float)floatWithIndex:(NSUInteger)index;

/**
 *  数据描述，小数
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (double)doubleWithIndex:(NSUInteger)index;

/**
 *  数据描述，日期
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (NSDate *)dateWithIndex:(NSUInteger)index dateFormat:(NSString *)dateFormat;

/**
 *  数据描述，小数
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (CGFloat)CGFloatWithIndex:(NSUInteger)index;

/**
 *  数据描述，点
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (CGPoint)pointWithIndex:(NSUInteger)index;

/**
 *  数据描述，size
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (CGSize)sizeWithIndex:(NSUInteger)index;

/**
 *  数据描述，rect
 *
 *  @param index 下标
 *
 *  @return 描述
 */
- (CGRect)rectWithIndex:(NSUInteger)index;
@end


#pragma --mark NSMutableArray setter

@interface NSMutableArray(SafeAccess)
/**
 *  可变数组，添加数组
 *
 *  @param i
 */
-(void)addObj:(id)i;

/**
 *  可变数组，添加数组
 *
 *  @param i
 */
-(void)addString:(NSString*)i;

/**
 *  可变数组，添加数组
 *
 *  @param i
 */
-(void)addBool:(BOOL)i;

/**
 *  可变数组，添加数组
 *
 *  @param i
 */
-(void)addInt:(int)i;

/**
 *  可变数组，添加数组
 *
 *  @param i
 */
-(void)addInteger:(NSInteger)i;

/**
 *  可变数组，添加数组
 *
 *  @param i
 */
-(void)addUnsignedInteger:(NSUInteger)i;

/**
 *  可变数组，添加数组
 *
 *  @param i
 */
-(void)addCGFloat:(CGFloat)f;

/**
 *  可变数组，添加数组
 *
 *  @param i
 */
-(void)addChar:(char)c;

/**
 *  可变数组，添加数组
 *
 *  @param i
 */
-(void)addFloat:(float)i;

/**
 *  可变数组，添加数组
 *
 *  @param i
 */
-(void)addPoint:(CGPoint)o;

/**
 *  可变数组，添加数组
 *
 *  @param i
 */
-(void)addSize:(CGSize)o;

/**
 *  可变数组，添加数组
 *
 *  @param i
 */
-(void)addRect:(CGRect)o;
@end