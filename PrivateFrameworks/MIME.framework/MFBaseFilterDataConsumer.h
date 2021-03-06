/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MFDataConsumer.h"

@class NSArray, NSMutableArray;

@interface MFBaseFilterDataConsumer : XXUnknownSuperclass <MFDataConsumer> {
	NSMutableArray* _consumers;
	BOOL _serialAppend;
}
@property(assign, nonatomic, getter=isSerialAppend) BOOL serialAppend;
@property(readonly, assign, nonatomic) NSArray* consumers;
+(id)filterWithConsumers:(id)consumers;
+(id)filterWithConsumer:(id)consumer;
-(id)initWithConsumers:(id)consumers;
-(id)initWithConsumer:(id)consumer;
-(int)appendData:(id)data;
-(void)done;
-(void)dealloc;
@end

