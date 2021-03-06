/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GKRingBuffer : XXUnknownSuperclass {
@private
	void* ringBufRef;
	unsigned endTime;
	unsigned capacity;
}
-(id)initWithCapacity:(unsigned long)capacity;
-(id)init;
-(void)dealloc;
-(void)increaseCapacity:(unsigned long)capacity;
-(BOOL)store:(short*)store numSamples:(unsigned long)samples timestamp:(unsigned long)timestamp;
-(long)needsNewNumSamples:(unsigned long)samples timestamp:(unsigned long)timestamp;
-(long)fetch:(short*)fetch numSamples:(unsigned long)samples timestamp:(unsigned long)timestamp;
@end

