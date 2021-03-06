/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

@interface XXUnknownSuperclass (CompressionAdditions)
-(id)_FTCompressData;
-(id)_FTDecompressData;
-(id)_FTGzippedData;
@end

@interface XXUnknownSuperclass (FaceTimeStringAdditions)
@property(readonly, assign, nonatomic) int _FTBestGuessFTIDType;
@property(readonly, assign, nonatomic) int _FTIDType;
@property(readonly, assign, nonatomic) NSData* _FTDataFromHexString;
@property(readonly, assign, nonatomic) NSData* _FTDataFromBase64String;
-(id)_FTStripFTIDPrefix;
-(id)_FTIDFromEmail;
-(id)_FTIDFromPhoneNumber;
-(id)_FTIDFromFTIDType:(int)ftidtype;
@end

