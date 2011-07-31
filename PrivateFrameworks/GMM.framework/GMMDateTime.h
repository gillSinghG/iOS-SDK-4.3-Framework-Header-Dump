/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GMMDateTime.h"


@interface GMMDateTime : XXUnknownSuperclass {
@private
	long long _secsSinceEpoch;
	int _timeZoneOffsetMin;
	BOOL _hasTimeZoneOffsetMin;
}
@property(assign, nonatomic) long long secsSinceEpoch;
@property(assign, nonatomic) int timeZoneOffsetMin;
@property(readonly, assign, nonatomic) BOOL hasTimeZoneOffsetMin;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

@interface GMMDateTime (GMMProtoExtras)
-(id)description;
@end
