/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"


@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer {
	unsigned char _lastEncoded;
	unsigned _required;
	BOOL _forTextPart;
}
@property(assign, nonatomic) BOOL forTextPart;
-(int)appendData:(id)data;
-(void)done;
@end

