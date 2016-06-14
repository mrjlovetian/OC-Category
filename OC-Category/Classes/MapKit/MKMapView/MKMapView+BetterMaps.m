//
//  MKMapView+BetterMaps.m
//
//  Created by 余洪江 on 16/03/01.
//  Copyright © MRJ. All rights reserved.
//
#import "MKMapView+BetterMaps.h"

@implementation MKMapView (BetterMaps)

- (void)zoomToFitAnnotationsAnimated:(BOOL)animated {
    MKMapRect zoomRect = MKMapRectNull;
    for (id <MKAnnotation> annotation in self.annotations)
    {
        MKMapPoint annotationPoint = MKMapPointForCoordinate(annotation.coordinate);
        MKMapRect pointRect = MKMapRectMake(annotationPoint.x, annotationPoint.y, 0.1, 0.1);
        zoomRect = MKMapRectUnion(zoomRect, pointRect);
    }
    [self setVisibleMapRect:zoomRect animated:animated];
}

@end
