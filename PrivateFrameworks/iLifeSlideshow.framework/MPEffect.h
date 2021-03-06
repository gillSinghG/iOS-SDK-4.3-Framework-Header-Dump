/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "iLifeSlideshow-Structs.h"
#import "MPAudioSupport.h"
#import "MPFilterSupport.h"
#import "MPAnimationSupport.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MPEffect.h"

@class NSMutableDictionary, MCContainerEffect, MPAudioPlaylist, MPEffectInternal, MPEffectContainer, MCPlugParallel, NSMutableArray;

@interface MPEffect : XXUnknownSuperclass <NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport> {
@private
	NSMutableArray* _slides;
	NSMutableArray* _texts;
	NSMutableArray* _filters;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _animationPaths;
	MCContainerEffect* _container;
	MCPlugParallel* _plug;
	MPAudioPlaylist* _audioPlaylist;
	MPEffectContainer* _parentContainer;
	BOOL _replaceSlides;
	MPEffectInternal* _internal;
}
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
+(id)effectWithEffectID:(id)effectID;
+(id)effectWithEffectID:(id)effectID andPaths:(id)paths;
+(id)effectWithEffectID:(id)effectID andStrings:(id)strings;
+(id)effectWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;
-(id)initWithEffectID:(id)effectID;
-(id)initWithEffectID:(id)effectID andPaths:(id)paths;
-(id)initWithEffectID:(id)effectID andStrings:(id)strings;
-(id)initWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(void)finalize;
-(void)dealloc;
-(id)effectID;
-(void)setEffectID:(id)anId;
-(id)presetID;
-(void)setPresetID:(id)anId;
-(id)effectAttributes;
-(id)effectAttributeForKey:(id)key;
-(void)setEffectAttribute:(id)attribute forKey:(id)key;
-(float)opacity;
-(void)setOpacity:(float)opacity;
-(CGPoint)position;
-(void)setPosition:(CGPoint)position;
-(float)zPosition;
-(void)setZPosition:(float)position;
-(float)rotationAngle;
-(void)setRotationAngle:(float)angle;
-(CGSize)size;
-(void)setSize:(CGSize)size;
-(float)xRotationAngle;
-(void)setXRotationAngle:(float)angle;
-(float)yRotationAngle;
-(void)setYRotationAngle:(float)angle;
-(double)phaseInDuration;
-(void)setPhaseInDuration:(double)duration;
-(double)phaseOutDuration;
-(void)setPhaseOutDuration:(double)duration;
-(double)mainDuration;
-(void)setMainDuration:(double)duration;
-(int)zIndex;
-(id)slides;
-(void)addSlide:(id)slide;
-(void)addSlides:(id)slides;
-(void)insertSlides:(id)slides atIndex:(int)index;
-(void)removeSlidesAtIndices:(id)indices;
-(void)removeAllSlides;
-(void)replaceSlideAtIndex:(int)index withSlide:(id)slide;
-(void)replaceSlide:(id)slide atIndex:(int)index;
-(void)moveSlidesFromIndices:(id)indices toIndex:(int)index;
-(BOOL)supportsUnlimitedSlides;
-(BOOL)replaceSlides;
-(void)setReplaceSlides:(BOOL)slides;
-(id)texts;
-(void)addText:(id)text;
-(void)addTexts:(id)texts;
-(void)insertTexts:(id)texts atIndex:(int)index;
-(void)removeTextsAtIndices:(id)indices;
-(void)removeAllTexts;
-(void)moveTextsFromIndices:(id)indices toIndex:(int)index;
-(BOOL)isTextOnly;
-(id)filters;
-(void)addFilter:(id)filter;
-(void)addFilters:(id)filters;
-(void)insertFilters:(id)filters atIndex:(int)index;
-(void)removeFiltersAtIndices:(id)indices;
-(void)removeAllFilters;
-(void)moveFiltersFromIndices:(id)indices toIndex:(int)index;
-(id)animationPaths;
-(id)animationPathForKey:(id)key;
-(void)setAnimationPath:(id)path forKey:(id)key;
-(void)removeAnimationPathForKey:(id)key;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)playlist;
-(int)audioPriority;
-(void)setAudioPriority:(int)priority;
-(id)parentContainer;
-(int)randomSeed;
-(void)setRandomSeed:(int)seed;
@end

@interface MPEffect (AppleScript)
-(int)countOfSlides;
-(id)objectInSlidesAtIndex:(int)index;
-(void)insertObject:(id)object inSlidesAtIndex:(int)index;
-(void)removeObjectFromSlidesAtIndex:(int)index;
-(void)replaceObjectInSlidesAtIndex:(int)index withObject:(id)object;
-(int)countOfTexts;
-(id)objectInTextsAtIndex:(int)index;
-(void)insertObject:(id)object inTextsAtIndex:(int)index;
-(void)removeObjectFromTextsAtIndex:(int)index;
-(void)replaceObjectInTextsAtIndex:(int)index withObject:(id)object;
-(int)countOfFilters;
-(id)objectInFiltersAtIndex:(int)index;
-(void)insertObject:(id)object inFiltersAtIndex:(int)index;
-(void)removeObjectFromFiltersAtIndex:(int)index;
-(void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;
-(float)xPosition;
-(void)setXPosition:(float)position;
-(float)yPosition;
-(void)setYPosition:(float)position;
-(float)height;
-(void)setHeight:(float)height;
-(float)width;
-(void)setWidth:(float)width;
-(id)scriptingAnimations;
-(void)setScriptingAnimations:(id)animations;
@end

@interface MPEffect (Internal)
-(void)copyStruct:(id)aStruct;
-(void)copySlides:(id)slides;
-(void)copyTexts:(id)texts;
-(void)copyFilters:(id)filters;
-(void)copyAnimationPaths:(id)paths;
-(void)copyAudioPlaylist:(id)playlist;
-(void)cleanup;
-(void)setPlug:(id)plug;
-(void)setContainer:(id)container;
-(void)setParentContainer:(id)container;
-(BOOL)needsParallelizer;
-(void)scaleMainDuration;
-(void)recreateWithContainer:(id)container andPlug:(id)plug;
@end

@interface MPEffect (Private)
-(id)plug;
-(id)container;
-(void)createTextsWithDefaultStrings;
-(void)replaceTextsWitStrings:(id)strings;
-(void)createTextsWithStrings:(id)strings;
-(void)createSlidesWithPaths:(id)paths;
-(void)reconfigureSlides;
-(double)fullDuration;
-(void)setFullDuration:(double)duration;
-(void)dump;
-(id)fullDebugLog;
@end

