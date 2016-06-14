//
//  NSUserDefaults+iCloudSync.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSUserDefaults (iCloudSync)

-(void)setValue:(id)value  forKey:(NSString *)key iCloudSync:(BOOL)sync;
-(void)setObject:(id)value forKey:(NSString *)key iCloudSync:(BOOL)sync;

-(id)valueForKey:(NSString *)key  iCloudSync:(BOOL)sync;
-(id)objectForKey:(NSString *)key iCloudSync:(BOOL)sync;

-(BOOL)synchronizeAlsoiCloudSync:(BOOL)sync;

@end
