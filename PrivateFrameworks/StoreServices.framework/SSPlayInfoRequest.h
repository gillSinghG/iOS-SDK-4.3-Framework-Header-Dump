/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class SSPlayInfoResponse, SSPlayInfoRequestContext;
@protocol SSPlayInfoRequestDelegate;

@interface SSPlayInfoRequest : SSRequest {
@private
	SSPlayInfoRequestContext* _context;
	SSPlayInfoResponse* _response;
}
@property(assign, nonatomic) id<SSPlayInfoRequestDelegate> delegate;
@property(readonly, assign, nonatomic) SSPlayInfoResponse* playInfoResponse;
@property(readonly, assign, nonatomic) SSPlayInfoRequestContext* playInfoContext;
-(id)init;
-(id)initWithPlayInfoContext:(id)playInfoContext;
-(void)dealloc;
-(id)copyPropertyListEncoding;
-(id)initWithPropertyListEncoding:(id)propertyListEncoding;
-(id)handleFailureResponse:(id)response;
-(BOOL)handleFinishResponse:(id)response error:(id*)error;
-(BOOL)issueRequestForIdentifier:(id)identifier error:(id*)error;
-(void)_sendResponseToDelegate:(id)delegate;
@end
