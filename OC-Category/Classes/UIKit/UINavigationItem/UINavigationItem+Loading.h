
//
// UINavigationItem+Loading.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  Position to show UIActivityIndicatorView in a navigation bar
 */
typedef NS_ENUM(NSUInteger, NavBarLoaderPosition){
    /**
     *  Will show UIActivityIndicatorView in place of title view
     */
    NavBarLoaderPositionCenter = 0,
    /**
     *  Will show UIActivityIndicatorView in place of left item
     */
    NavBarLoaderPositionLeft,
    /**
     *  Will show UIActivityIndicatorView in place of right item
     */
    NavBarLoaderPositionRight
};

@interface UINavigationItem (Loading)

/**
 *  Add UIActivityIndicatorView to view hierarchy and start animating immediately
 *
 *  @param position Left, center or right
 */
- (void)startAnimatingAt:(NavBarLoaderPosition)position;

/**
 *  Stop animating, remove UIActivityIndicatorView from view hierarchy and restore item
 */
- (void)stopAnimating;

@end