/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIKBKey;

__attribute__((visibility("hidden")))
@interface UIKBKeyInterval : XXUnknownSuperclass {
@private
	UIKBKey* _key;
	double _interval;
}
@property(retain, nonatomic) UIKBKey* key;
@property(assign, nonatomic) double interval;
-(id)initWithKey:(id)key interval:(double)interval;
-(void)dealloc;
@end
