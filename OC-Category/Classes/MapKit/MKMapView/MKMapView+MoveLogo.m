//
//  MKMapView+MoveLogo.m
//  Shield
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import "MKMapView+MoveLogo.h"

@implementation MKMapView (MoveLogo)

- (void)moveLogoByOffset:(CGPoint)offset {
    UIView* logo = [self logo];
    
    logo.frame = CGRectOffset(logo.frame, offset.x, offset.y);
}

- (void)moveLogoToPoint:(CGPoint)point {
    UIView* logo = [self logo];
    
    logo.frame = CGRectMake(point.x, point.y, logo.frame.size.width, logo.frame.size.height);
}

- (UIView*)logo {
    UIView* logo;
    
    //Google Maps
    for (UIView *subview in self.subviews) {
        if ([subview isMemberOfClass:[UIImageView class]]) {
            logo = (UIView*)subview;
            break;
        }
    }
    
    //If we're on Apple Maps, there is no UIImageView.
    if (!logo) {
        for (UIView *subview in self.subviews)
            if ([subview isKindOfClass:[UILabel class]]) {
                logo = (UIView*)subview;
                break;
            }
    }
    
    return logo;
}

@end
