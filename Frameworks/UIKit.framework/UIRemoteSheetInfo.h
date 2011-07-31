/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIRemoteView, UIView;

__attribute__((visibility("hidden")))
@interface UIRemoteSheetInfo : XXUnknownSuperclass {
@private
	UIView* _sheetView;
	UIRemoteView* _remoteView;
	id _delegate;
	SEL _selector;
	void* _context;
	int _returnCode;
}
@property(retain, nonatomic) UIView* sheetView;
@property(retain, nonatomic) UIRemoteView* remoteView;
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic) SEL selector;
@property(assign, nonatomic) void* context;
@property(assign, nonatomic) int returnCode;
-(void)dealloc;
@end
