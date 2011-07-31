/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, CoreDAVResponseItem;
@protocol CoreDAVPropPatchTaskDelegate;

@interface CoreDAVPropPatchTask : CoreDAVTask {
	NSSet* _propPatchRemoveElements;
	NSSet* _propPatchSetElements;
	CoreDAVResponseItem* _responseItem;
	BOOL _sendOrder;
	int _order;
}
@property(assign, nonatomic) id<CoreDAVPropPatchTaskDelegate> delegate;
@property(retain) NSSet* propPatchRemoveElements;
@property(retain) NSSet* propPatchSetElements;
@property(retain) CoreDAVResponseItem* responseItem;
@property(assign, nonatomic) int order;
-(id)initWithURL:(id)url;
-(id)initWithPropertiesToSet:(id)set andRemove:(id)remove atURL:(id)url;
-(void)dealloc;
-(id)description;
-(id)httpMethod;
-(id)additionalHeaderValues;
-(id)requestBody;
-(id)copyDefaultParserForContentType:(id)contentType;
-(void)finishCoreDAVTaskWithError:(id)error;
@end
