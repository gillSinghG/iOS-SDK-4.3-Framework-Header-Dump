/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface CTCarrier : XXUnknownSuperclass {
	NSString* _carrierName;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSString* _isoCountryCode;
	BOOL _allowsVOIP;
}
@property(retain, nonatomic) NSString* carrierName;
@property(retain, nonatomic) NSString* mobileCountryCode;
@property(retain, nonatomic) NSString* mobileNetworkCode;
@property(retain, nonatomic) NSString* isoCountryCode;
@property(assign, nonatomic) BOOL allowsVOIP;
-(id)description;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)equal;
@end

