//
//  MKMapView+MoveLogo.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface MKMapView (MoveLogo)

- (void)moveLogoByOffset:(CGPoint)offset;
- (void)moveLogoToPoint:(CGPoint)point;
- (UIView*)logo;

@end
