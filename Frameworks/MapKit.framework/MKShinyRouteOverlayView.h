/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import "MKRouteOverlayView.h"


__attribute__((visibility("hidden")))
@interface MKShinyRouteOverlayView : MKRouteOverlayView {
@private
	id _activeStep;
}
+(BOOL)_useMiniTiledLayer;
-(id)displayPromiseForStepChange;
-(void)set_levelCrossFade:(BOOL)fade;
-(void)drawMapRect:(XXStruct_Yvvv9D)rect zoomScale:(float)scale inContext:(CGContextRef)context;
@end

