//
//  NSURLConnection+SelfSigned.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURLConnection (SelfSigned)
/**
 *  @author Categories
 *
 *  Sends async request while accepting all self-signed certs
 *
 */
+ (void)sendAsynchronousRequestAcceptingAllCerts:(NSURLRequest *)request queue:(NSOperationQueue *)queue completionHandler:(void (^)(NSURLResponse *, NSData *, NSError *))handler;

@end
