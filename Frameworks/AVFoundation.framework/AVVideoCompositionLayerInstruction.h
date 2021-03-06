/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class AVVideoCompositionLayerInstructionInternal;

@interface AVVideoCompositionLayerInstruction : XXUnknownSuperclass <NSCoding, NSCopying, NSMutableCopying> {
@private
	AVVideoCompositionLayerInstructionInternal* _layerInstruction;
}
@property(readonly, assign, nonatomic) int trackID;
+(void)initialize;
-(id)init;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)finalize;
-(void)setTrackID:(int)anId;
-(void)_setTransformRamps:(id)ramps;
-(void)_setOpacityRamps:(id)ramps;
-(void)_setTransformRampFromStartTransform:(CGAffineTransform)startTransform toEndTransform:(CGAffineTransform)endTransform timeRange:(XXStruct_yD8eWC)range;
-(void)setTransform:(CGAffineTransform)transform atTime:(XXStruct_pwHToB)time;
-(void)setTransformRampFromStartTransform:(CGAffineTransform)startTransform toEndTransform:(CGAffineTransform)endTransform timeRange:(XXStruct_yD8eWC)range;
-(BOOL)getTransformRampForTime:(XXStruct_pwHToB)time startTransform:(CGAffineTransform*)transform endTransform:(CGAffineTransform*)transform3 timeRange:(XXStruct_yD8eWC*)range;
-(void)_setOpacityRampFromStartOpacity:(float)startOpacity toEndOpacity:(float)endOpacity timeRange:(XXStruct_yD8eWC)range;
-(void)setOpacity:(float)opacity atTime:(XXStruct_pwHToB)time;
-(void)setOpacityRampFromStartOpacity:(float)startOpacity toEndOpacity:(float)endOpacity timeRange:(XXStruct_yD8eWC)range;
-(BOOL)getOpacityRampForTime:(XXStruct_pwHToB)time startOpacity:(float*)opacity endOpacity:(float*)opacity3 timeRange:(XXStruct_yD8eWC*)range;
-(id)dictionaryRepresentationWithTimeRange:(XXStruct_yD8eWC)timeRange;
-(void)_setValuesFromDictionary:(id)dictionary timeRange:(XXStruct_yD8eWC)range;
@end

