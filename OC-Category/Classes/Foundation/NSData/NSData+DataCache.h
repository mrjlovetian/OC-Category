//
//  NSData+SDDataCache.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSData (DataCache)

/**
 *  将URL作为key保存到磁盘里缓存起来
 *
 *  @param identifier url.absoluteString
 */
- (void)saveDataCacheWithIdentifier:(NSString *)identifier;

/**
 *  取出缓存data
 *
 *  @param identifier url.absoluteString
 *
 *  @return 缓存
 */
+ (NSData *)getDataCacheWithIdentifier:(NSString *)identifier;

@end
