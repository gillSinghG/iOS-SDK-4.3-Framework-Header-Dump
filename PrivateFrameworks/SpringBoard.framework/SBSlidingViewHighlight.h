/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UIImage;

@interface SBSlidingViewHighlight : XXUnknownSuperclass {
	UIImage* _highlightImage;
	UIImageView* _leftHighlight;
	UIImageView* _rightHighlight;
	CGRect _notchRect;
}
+(float)defaultHeight;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame notchRect:(CGRect)rect;
-(void)layoutSubviews;
-(void)setNotchRect:(CGRect)rect;
-(void)dealloc;
@end

