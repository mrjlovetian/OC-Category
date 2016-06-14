//
//  NSObject+MKBlockTimer.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (BlockTimer)
-(void)logTimeTakenToRunBlock:(void (^)(void)) block withPrefix:(NSString*) prefixString;
@end
