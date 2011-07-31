/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMMOldResponse.h"


@interface GMMHasTrafficResponse : GMMOldResponse {
@private
	BOOL _hasTraffic;
}
@property(assign, nonatomic) BOOL hasTraffic;
+(id)responseSubdataFromReader:(id)reader;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)dictionaryRepresentation;
@end
