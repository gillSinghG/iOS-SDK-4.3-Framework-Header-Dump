/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MKStreetViewRequest : XXUnknownSuperclass {
@private
	NSMutableArray* _panoramaLoaderRequests;
	CADoublePoint _requestCoordinate;
}
@property(retain, nonatomic) NSArray* panoramaLoaderRequests;
@property(assign, nonatomic) CADoublePoint requestCoordinate;
-(void)removePanoramaRequests:(id)requests;
-(void)removeRequest:(id)request;
-(id)description;
-(void)dealloc;
@end

