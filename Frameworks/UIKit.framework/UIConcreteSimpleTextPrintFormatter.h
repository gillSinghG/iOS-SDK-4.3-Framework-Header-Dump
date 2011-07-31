/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebDocumentViewPrintFormatter.h"

@class UIFont, NSString, UIColor;

@interface UIConcreteSimpleTextPrintFormatter : UIWebDocumentViewPrintFormatter {
}
@property(assign, nonatomic) int textAlignment;
@property(retain, nonatomic) UIColor* color;
@property(retain, nonatomic) UIFont* font;
@property(copy, nonatomic) NSString* text;
-(id)initWithText:(id)text;
-(id)_textView;
-(id)_webDocumentView;
@end
