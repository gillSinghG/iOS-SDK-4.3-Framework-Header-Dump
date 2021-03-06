/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADGraphic.h"

@class OADShapeGeometry, OADMovie, OADOle;

__attribute__((visibility("hidden")))
@interface OADImage : OADGraphic {
@private
	OADShapeGeometry* mGeometry;
	OADOle* mOle;
	OADMovie* mMovie;
}
-(id)init;
-(void)dealloc;
-(id)initWithBlipRef:(id)blipRef;
-(id)imageProperties;
-(id)geometry;
-(void)setGeometry:(id)geometry;
-(id)ole;
-(void)setOle:(id)ole;
-(id)movie;
-(void)setMovie:(id)movie;
-(void)setParentTextListStyle:(id)style;
-(id)createImageFill;
-(void)createPictureFramePresetGeometry;
@end

