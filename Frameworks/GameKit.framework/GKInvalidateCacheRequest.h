/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class NSArray;

@interface GKInvalidateCacheRequest : GKDataRequest {
	NSArray* _invalidateCacheKeys;
	int _cacheType;
}
@property(retain, nonatomic) NSArray* invalidateCacheKeys;
@property(assign, nonatomic) int cacheType;
-(void)dealloc;
@end
