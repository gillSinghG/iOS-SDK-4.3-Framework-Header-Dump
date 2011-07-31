/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "PLImageView.h"

@class UIView, UILabel, UIImage;

@interface PLPolaroidImageView : PLImageView {
	UIView* _posterView;
	UILabel* _nameLabel;
	float _thinBorderWidth;
	BOOL _polaroidBorderVisible;
	CGRect _roi;
}
@property(retain, nonatomic) UIImage* posterImage;
+(Class)layerClass;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(float)_tunedProgress;
-(void)setBorderVisible:(BOOL)visible;
-(void)setTransitionProgress:(float)progress;
-(void)setPosterImage:(id)image regionOfInterest:(CGRect)interest;
-(void)setName:(id)name;
-(void)layoutSubviews;
-(void)renderSnapshotInContext:(CGContextRef)context;
-(CGSize)sizeThatFits:(CGSize)fits allowRounding:(BOOL)rounding;
-(void)_adjustLabel;
-(void)_updatePolaroidFramePath:(BOOL)path;
@end
