/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIPickerViewTopFrame : UIView {
@private
	UIImage* _leftImage;
	UIImage* _middleImage;
	UIImage* _rightImage;
	float _inset;
	float _shift;
}
-(id)initWithFrame:(CGRect)frame;
-(void)setLeftImage:(id)image middleImage:(id)image2 rightImage:(id)image3;
-(void)dealloc;
-(BOOL)ignoresMouseEvents;
-(void)setInset:(float)inset;
-(void)setShift:(float)shift;
-(void)drawRect:(CGRect)rect;
@end

