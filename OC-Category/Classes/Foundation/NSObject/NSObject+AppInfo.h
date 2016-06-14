//
//  NSObject+AppInfo.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (AppInfo)
-(NSString *)version;
-(NSInteger)build;
-(NSString *)identifier;
-(NSString *)currentLanguage;
-(NSString *)deviceModel;
@end
