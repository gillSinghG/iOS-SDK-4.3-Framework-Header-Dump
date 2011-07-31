/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDBar2DType.h"


__attribute__((visibility("hidden")))
@interface CHDBar3DType : CHDBar2DType {
@private
	int mGapDepth;
	int mShapeType;
}
+(bool)is3DType;
-(id)initWithChart:(id)chart;
-(int)gapDepth;
-(void)setGapDepth:(int)depth;
-(int)shapeType;
-(void)setShapeType:(int)type;
@end
