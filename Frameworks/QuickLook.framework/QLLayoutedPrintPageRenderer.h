/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "QLPrintPageRenderer.h"

@class NSMutableArray, UIWebPaginationInfo;

@interface QLLayoutedPrintPageRenderer : QLPrintPageRenderer {
	NSMutableArray* _nodes;
	unsigned _currentNodeIndex;
	UIWebPaginationInfo* _paginationInfo;
}
-(void)dealloc;
-(id)_htmlPageXPath;
-(id)_currentNodes;
-(int)numberOfPages;
-(void)prepareForDrawingPages:(NSRange)drawingPages;
-(void)drawContentForPageAtIndex:(int)index inRect:(CGRect)rect;
@end

