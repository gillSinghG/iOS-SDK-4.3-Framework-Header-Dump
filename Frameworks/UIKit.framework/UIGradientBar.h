/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView;

@interface UIGradientBar : UIView {
	UIImageView* _topShineView;
	UIImageView* _gradientFillView;
	UIView* _bottomLineView;
	float _gradientHeight;
}
+(id)gradientFillImage;
+(id)bottomLineColor;
-(void)_tile;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setFrame:(CGRect)frame;
-(void)setBottomLineAlpha:(float)alpha;
-(void)setGradientHeight:(float)height;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
@end

