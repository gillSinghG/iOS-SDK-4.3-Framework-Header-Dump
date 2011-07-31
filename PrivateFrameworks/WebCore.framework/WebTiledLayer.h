/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "WebTiledLayer.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebTiledLayer : XXUnknownSuperclass {
@private
	GraphicsLayer* m_layerOwner;
}
+(double)fadeDuration;
+(BOOL)shouldDrawOnMainThread;
-(id)actionForKey:(id)key;
-(id)initWithLayer:(id)layer;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(CGRect)rect;
-(void)display;
-(void)drawInContext:(CGContextRef)context;
@end

@interface WebTiledLayer (LayerMacAdditions)
-(void)setLayerOwner:(GraphicsLayer*)owner;
-(GraphicsLayer*)layerOwner;
@end
