/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSURL;

@interface MPMovie : XXUnknownSuperclass {
@private
	id _internal;
}
@property(assign, nonatomic) double endPlaybackTime;
@property(assign, nonatomic) double startPlaybackTime;
@property(readonly, assign, nonatomic) CGSize naturalSize;
@property(readonly, assign, nonatomic) double playableDuration;
@property(readonly, assign, nonatomic) double duration;
@property(assign, nonatomic) int movieSourceType;
@property(readonly, assign, nonatomic) int movieMediaTypes;
@property(readonly, assign, nonatomic) NSURL* url;
+(id)movieWithURL:(id)url error:(id*)error;
-(id)_initWithURL:(id)url error:(id*)error;
-(void)dealloc;
-(void)_durationAvailableNotification:(id)notification;
-(void)_naturalSizeAvailableNotification:(id)notification;
-(void)_typeAvailableNotification:(id)notification;
-(void)_fileValidationDidFinishNotification:(id)_fileValidation;
-(id)_MPArrayQueueItem;
-(void)_determineMediaType;
@end
