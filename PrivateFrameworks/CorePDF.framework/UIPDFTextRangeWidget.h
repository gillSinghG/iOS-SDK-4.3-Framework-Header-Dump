/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CorePDF-Structs.h"
#import "UIPDFSelectionWidget.h"

@class CAShapeLayer, UIPDFPageView, UIPDFSelection, CALayer;

@interface UIPDFTextRangeWidget : XXUnknownSuperclass <UIPDFSelectionWidget> {
	CALayer* _leftSelectionGrabber;
	CALayer* _leftBar;
	CALayer* _rightSelectionGrabber;
	CALayer* _rightBar;
	CALayer* _rightHandle;
	CALayer* _fixedSelectionGrabber;
	CAShapeLayer* _textHighlighter;
	UIPDFSelection* _selection;
	UIPDFPageView* _pageView;
	float _handleHeight;
	float _handleWidth;
}
@property(assign, nonatomic) UIPDFPageView* pageView;
-(id)init;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setSelection:(id)selection;
-(void)addToLayer:(id)layer;
-(void)remove;
-(BOOL)hitLeft:(CGPoint)left;
-(BOOL)hitRight:(CGPoint)right;
-(BOOL)hitTest:(CGPoint)test;
-(CGPoint)selectedPointFor:(CGPoint)aFor;
-(BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint*)point preceeds:(BOOL*)preceeds;
@end
