// AutoCoding.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface NSObject (AutoCoding) <NSSecureCoding>
//coding
+ (NSDictionary *)codableProperties;
- (void)setWithCoder:(NSCoder *)aDecoder;
//property access
- (NSDictionary *)codableProperties;
- (NSDictionary *)dictionaryRepresentation;
//loading / saving
+ (instancetype)objectWithContentsOfFile:(NSString *)path;
- (BOOL)writeToFile:(NSString *)filePath atomically:(BOOL)useAuxiliaryFile;
@end