/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CorePDF-Structs.h"
#import "CPDisposable.h"

@class NSMutableArray, CPZone;

@interface CPSpacerFinder : XXUnknownSuperclass <CPDisposable> {
	CPZone* contentZone;
	CGRect zoneBounds;
	CGRect textBounds;
	struct {
		unsigned allocatedSize;
		unsigned size;
		unsigned count;
		CGPoint* stats;
		CGPoint** ordered;
	} spacerSequence;
	NSMutableArray* spacers;
	unsigned segmentationCount;
	XXStruct_OVeKqA* segmentations;
	XXStruct_cUngNA* qualityEntries;
}
-(id)initWithContentZone:(id)contentZone;
-(void)dispose;
-(void)finalize;
-(void)dealloc;
-(void)initializeSegmentations;
-(void)initializeJunctions;
-(void)findSpacers;
-(void)assessQuality;
-(void)determineValidity;
-(void)splitTextLines;
-(id)spacers;
@end
