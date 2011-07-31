/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIThreePartButton.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UILabeledPushButton : UIThreePartButton {
@private
	UILabel* _textLabel;
	float _labelFontSize;
	float _labelOffset;
}
@property(assign, nonatomic) float labelOffset;
@property(assign, nonatomic) float labelFontSize;
-(void)dealloc;
-(void)setLabel:(id)label;
-(id)label;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)highlighted;
-(void)drawTitleAtPoint:(CGPoint)point width:(float)width;
-(void)_drawImageAndTextPartInRect:(CGRect)rect;
@end
