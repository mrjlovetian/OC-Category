//
//  NSFileHandle+readLine.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileHandle (ReadLine)
/**
 *  @brief   A Cocoa / Objective-C NSFileHandle category that adds the ability to read a file line by line.

 *
 *  @param theDelimier 分隔符
 *
 *  @return An NSData* object is returned with the line if found, or nil if no more lines were found
 */
- (NSData *)readLineWithDelimiter:(NSString *)theDelimier;

@end
