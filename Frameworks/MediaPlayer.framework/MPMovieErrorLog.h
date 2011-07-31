/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSArray, NSData;

@interface MPMovieErrorLog : XXUnknownSuperclass <NSCopying> {
	MPMovieErrorLogInternal _internal;
}
@property(assign, nonatomic) MPMovieErrorLogInternal _internal;
@property(readonly, assign, nonatomic) NSArray* events;
@property(readonly, assign, nonatomic) unsigned extendedLogDataStringEncoding;
@property(readonly, assign, nonatomic) NSData* extendedLogData;
-(id)_initWithAVItemErrorLog:(id)avitemErrorLog;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
@end
