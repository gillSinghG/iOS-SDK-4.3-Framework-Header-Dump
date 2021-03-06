/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSObject.h"


@protocol WebDocumentRepresentation <NSObject>
-(void)setDataSource:(id)source;
-(void)receivedData:(id)data withDataSource:(id)dataSource;
-(void)receivedError:(id)error withDataSource:(id)dataSource;
-(void)finishedLoadingWithDataSource:(id)dataSource;
-(BOOL)canProvideDocumentSource;
-(id)documentSource;
-(id)title;
@end

