/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMNode.h"

@class NSString;

@interface DOMCharacterData : DOMNode {
}
@property(readonly, assign) unsigned length;
@property(copy) NSString* data;
-(id)substringData:(unsigned)data length:(unsigned)length;
-(id)substringData:(unsigned)data :(unsigned)arg2;
-(void)appendData:(id)data;
-(void)insertData:(unsigned)data data:(id)data2;
-(void)insertData:(unsigned)data :(id)arg2;
-(void)deleteData:(unsigned)data length:(unsigned)length;
-(void)deleteData:(unsigned)data :(unsigned)arg2;
-(void)replaceData:(unsigned)data length:(unsigned)length data:(id)data3;
-(void)replaceData:(unsigned)data :(unsigned)arg2 :(id)arg3;
@end
