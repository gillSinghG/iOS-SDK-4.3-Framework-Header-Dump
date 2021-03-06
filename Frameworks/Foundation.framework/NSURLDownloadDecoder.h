/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSObject.h"


@protocol NSURLDownloadDecoder <NSObject>
+(BOOL)canDecodeDownloadHeaderData:(id)data;
+(id)MIMEType;
-(BOOL)decodeDownloadData:(id)data dataForkData:(id*)data2 resourceForkData:(id*)data3;
-(BOOL)finishDownloadDecoding;
-(id)fileAttributes;
-(id)filenameWithOriginalFilename:(id)originalFilename;
@end

