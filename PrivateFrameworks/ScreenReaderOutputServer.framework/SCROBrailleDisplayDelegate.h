/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import "NSObject.h"


@protocol SCROBrailleDisplayDelegate <NSObject>
-(void)brailleDisplay:(id)display driverDidLoad:(BOOL)driver;
-(void)brailleDriverDisconnected:(id)disconnected;
-(void)brailleDisplay:(id)display isSleeping:(BOOL)sleeping;
-(void)configurationChangedForBrailleDisplay:(id)brailleDisplay;
-(void)brailleDisplay:(id)display pressedKeys:(id)keys;
-(void)brailleDisplay:(id)display willMemorizeKey:(id)key;
-(void)brailleDisplay:(id)display memorizedKey:(id)key;
-(void)brailleDisplay:(id)display didDisplay:(id)display2;
-(void)brailleDisplay:(id)display didPanLeft:(id)left elementToken:(id)token appToken:(id)token4;
-(void)brailleDisplay:(id)display didPanRight:(id)right elementToken:(id)token appToken:(id)token4;
@end
