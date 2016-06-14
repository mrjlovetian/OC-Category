//
//  UIViewController+StoreKit.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

////////////////////////////////////////////////////////////////////////////////
#pragma mark - Constants

#define affiliateToken @"10laQX"

////////////////////////////////////////////////////////////////////////////////
#pragma mark - Interface

@interface UIViewController (StoreKit)

@property NSString *campaignToken;
@property (nonatomic, copy) void (^loadingStoreKitItemBlock)(void);
@property (nonatomic, copy) void (^loadedStoreKitItemBlock)(void);

- (void)presentStoreKitItemWithIdentifier:(NSInteger)itemIdentifier;

+ (NSURL*)appURLForIdentifier:(NSInteger)identifier;

+ (void)openAppURLForIdentifier:(NSInteger)identifier;
+ (void)openAppReviewURLForIdentifier:(NSInteger)identifier;

+ (BOOL)containsITunesURLString:(NSString*)URLString;
+ (NSInteger)IDFromITunesURL:(NSString*)URLString;

@end
