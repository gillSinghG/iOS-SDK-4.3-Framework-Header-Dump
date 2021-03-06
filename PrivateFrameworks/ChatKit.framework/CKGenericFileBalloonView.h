/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "CKBalloonView.h"
#import "ChatKit-Structs.h"

@class NSString, UIImage;

@interface CKGenericFileBalloonView : CKBalloonView {
	UIImage* _icon;
	NSString* _text;
	NSString* _subtext;
	float _originalWidth;
}
@property(copy, nonatomic) NSString* text;
@property(copy, nonatomic) NSString* subtext;
@property(retain, nonatomic) UIImage* icon;
+(CGPoint)offsetForBubbleInsetAtPoint:(CGPoint)point;
+(float)additionalHeightForBubbleWhenInsetAtPoint:(CGPoint)point;
+(float)fixedHeight;
+(BOOL)shouldHaveAccessoryDiclosure;
-(id)initWithFrame:(CGRect)frame delegate:(id)delegate;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(float)tightenedWidth;
-(void)tighten;
-(id)_titleFont;
-(id)_subtitleFont;
-(CGRect)_iconRect;
-(CGRect)_textRect;
-(CGRect)_subtextRect;
@end

