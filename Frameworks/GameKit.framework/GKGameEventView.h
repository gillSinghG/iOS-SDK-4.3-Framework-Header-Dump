/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIWindow, UILabel, UIImageView;

@interface GKGameEventView : XXUnknownSuperclass {
	double _duration;
	UIWindow* _window;
	BOOL _showing;
	UIImageView* _backgroundView;
	UIImageView* _imageView;
	UILabel* _label;
}
@property(assign, nonatomic) double duration;
@property(retain, nonatomic) UIWindow* window;
@property(assign, nonatomic) BOOL showing;
@property(retain, nonatomic) UIImageView* backgroundView;
@property(retain, nonatomic) UIImageView* imageView;
@property(retain, nonatomic) UILabel* label;
-(id)init;
-(void)layoutSubviews;
-(void)dealloc;
-(void)layoutForOrientation:(int)orientation animated:(BOOL)animated;
-(void)show;
-(void)hide;
-(void)orientationChanged:(id)changed;
@end
