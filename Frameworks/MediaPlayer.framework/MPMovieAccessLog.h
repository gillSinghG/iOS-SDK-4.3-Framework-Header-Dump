/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSData;

@interface MPMovieAccessLog : XXUnknownSuperclass <NSCopying> {
	MPMovieAccessLogInternal _internal;
}
@property(assign, nonatomic) MPMovieAccessLogInternal _internal;
@property(readonly, assign, nonatomic) NSArray* events;
@property(readonly, assign, nonatomic) unsigned extendedLogDataStringEncoding;
@property(readonly, assign, nonatomic) NSData* extendedLogData;
-(id)_initWithAVItemAccessLog:(id)avitemAccessLog;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
@end
