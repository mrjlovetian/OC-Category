
//
//  NSURLRequest+ParamsFromDictionary.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURLRequest (ParamsFromDictionary)
/**
 *  @author Categories
 *
 *
 *
 */
- (id)initWithURL:(NSURL *)URL parameters:(NSDictionary *)params;

+(NSURLRequest *)requestGETWithURL:(NSURL *)url parameters:(NSDictionary *)params;

+(NSString *)URLfromParameters:(NSDictionary *)params;

+(NSArray *)queryStringComponentsFromKey:(NSString *)key value:(id)value;
+(NSArray *)queryStringComponentsFromKey:(NSString *)key dictionaryValue:(NSDictionary *)dict;
+(NSArray *)queryStringComponentsFromKey:(NSString *)key arrayValue:(NSArray *)array;
@end