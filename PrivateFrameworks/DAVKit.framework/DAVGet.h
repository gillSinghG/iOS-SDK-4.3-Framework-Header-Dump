/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVRequest.h"


@interface DAVGet : DAVRequest {
}
+(id)getRequestWithURL:(id)url;
+(id)getRequestWithSession:(id)session path:(id)path;
+(id)getRequestWithSession:(id)session URI:(id)uri;
-(id)initGetWithURL:(id)url;
-(id)initGetWithSession:(id)session path:(id)path;
-(id)initGetWithSession:(id)session URI:(id)uri;
-(id)data;
@end
