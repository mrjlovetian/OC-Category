//
//  NSObject+KVOBlocks.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef void (^KVOBlock)(NSDictionary *change, void *context);

@interface NSObject (KVOBlocks)

- (void)addObserver:(NSObject *)observer
         forKeyPath:(NSString *)keyPath
            options:(NSKeyValueObservingOptions)options
            context:(void *)context
          withBlock:(KVOBlock)block;

-(void)removeBlockObserver:(NSObject *)observer
                forKeyPath:(NSString *)keyPath;

-(void)addObserverForKeyPath:(NSString *)keyPath
                     options:(NSKeyValueObservingOptions)options
                     context:(void *)context
                   withBlock:(KVOBlock)block;

-(void)removeBlockObserverForKeyPath:(NSString *)keyPath;

@end