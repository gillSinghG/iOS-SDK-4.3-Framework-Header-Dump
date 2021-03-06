/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, SBWallpaperClipView;

@interface SBRoundedCornersView : XXUnknownSuperclass {
	float _cornerRadius;
	UIView* _contentView;
	SBWallpaperClipView* _topLeftCorner;
	SBWallpaperClipView* _topRightCorner;
	SBWallpaperClipView* _bottomLeftCorner;
	SBWallpaperClipView* _bottomRightCorner;
}
-(id)initWithFrame:(CGRect)frame cornerRadius:(float)radius content:(id)content wallpaperView:(id)view;
-(void)updateWallpaperOffsets;
-(void)setFrame:(CGRect)frame;
-(void)dealloc;
@end

