/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNotification;

@interface NSInterThreadMessage : XXUnknownSuperclass {
	int type;
	union {
		NSNotification* notification;
		struct {
			SEL selector;
			id receiver;
			id arg1;
			id arg2;
		} sel;
	} data;
}
@end

