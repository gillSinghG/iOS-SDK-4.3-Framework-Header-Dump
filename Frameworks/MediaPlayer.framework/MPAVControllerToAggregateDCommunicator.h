/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MPAVControllerToAggregateDCommunicator : XXUnknownSuperclass {
	unsigned _lastMediaType;
	double _playbackStartTime;
	BOOL _playbackStartTimeIsValid;
}
-(id)init;
-(void)dealloc;
-(void)_startPlaybackTimer;
-(void)_stopPlaybackTimer;
-(void)_handlePlaybackStateChangedNotification:(id)notification;
-(void)_handleItemChangedNotification:(id)notification;
@end

