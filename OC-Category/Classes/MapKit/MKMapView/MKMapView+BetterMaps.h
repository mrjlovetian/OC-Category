//
//  MKMapView+BetterMaps.h
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface MKMapView (BetterMaps)
- (void)zoomToFitAnnotationsAnimated:(BOOL)animated;
@end