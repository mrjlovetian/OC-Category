//
//  UIImage+RemoteSize.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^UIImageSizeRequestCompleted) (NSURL* imgURL, CGSize size);

@interface UIImage (RemoteSize)
/**
 *  @brief 获取远程图片的大小
 *
 *  @param imgURL     图片url
 *  @param completion 完成回调
 */
+ (void)requestSizeNoHeader:(NSURL*)imgURL completion:(UIImageSizeRequestCompleted)completion;
/**
 *  @brief  从header中获取远程图片的大小 (服务器必须支持)
 *
 *  @param imgURL     图片url
 *  @param completion 完成回调
 */
//+ (void)requestSizeWithHeader:(NSURL*)imgURL completion:(UIImageSizeRequestCompleted)completion;

@end