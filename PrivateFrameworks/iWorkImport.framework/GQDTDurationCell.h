/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDTCell.h"
#import "GQDTDurationCell.h"
#import "iWorkImport-Structs.h"

@class GQDTComputedFormatSpec;

__attribute__((visibility("hidden")))
@interface GQDTDurationCell : GQDTCell {
@private
	double mValue;
	GQDTComputedFormatSpec* mComputedFormat;
	CFBundleRef mProcessorBundle;
}
-(void)dealloc;
-(CFStringRef)createStringValue;
@end

@interface GQDTDurationCell (Private)
-(int)readAttributesForDurationCell:(xmlTextReader*)durationCell;
-(void)setProcessorBundle:(CFBundleRef)bundle;
@end
