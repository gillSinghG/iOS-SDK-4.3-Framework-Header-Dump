/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSURLRequest.h"

@class NSURLRequestInternal;

@interface NSURLRequest : XXUnknownSuperclass <NSCoding, NSCopying, NSMutableCopying> {
@private
	NSURLRequestInternal* _internal;
}
+(id)requestWithURL:(id)url cachePolicy:(unsigned)policy timeoutInterval:(double)interval;
+(id)requestWithURL:(id)url;
+(void)setDefaultTimeoutInterval:(double)interval;
+(double)defaultTimeoutInterval;
-(id)initWithURL:(id)url cachePolicy:(unsigned)policy timeoutInterval:(double)interval;
-(id)_initWithCFURLRequest:(CFURLRequestRef)cfurlrequest;
-(id)initWithURL:(id)url;
-(id)init;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(CFURLRequestRef)_CFURLRequest;
-(id)URL;
-(unsigned)cachePolicy;
-(double)timeoutInterval;
-(id)mainDocumentURL;
-(void)dealloc;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)_copyReplacingURLWithURL:(id)url;
-(BOOL)_URLHasScheme:(id)scheme;
-(id)_propertyForKey:(id)key;
-(void)_setProperty:(id)property forKey:(id)key;
-(void)_removePropertyForKey:(id)key;
-(unsigned)networkServiceType;
@end

@interface NSURLRequest (NSHTTPURLRequest)
+(BOOL)allowsAnyHTTPSCertificateForHost:(id)host;
+(void)setAllowsAnyHTTPSCertificate:(BOOL)certificate forHost:(id)host;
+(id)allowsSpecificHTTPSCertificateForHost:(id)host;
+(void)setAllowsSpecificHTTPSCertificate:(id)certificate forHost:(id)host;
-(id)HTTPMethod;
-(id)allHTTPHeaderFields;
-(id)valueForHTTPHeaderField:(id)httpheaderField;
-(id)HTTPBody;
-(id)HTTPBodyStream;
-(id)HTTPContentType;
-(id)HTTPExtraCookies;
-(id)HTTPReferrer;
-(id)HTTPUserAgent;
-(BOOL)HTTPShouldHandleCookies;
-(BOOL)HTTPShouldUsePipelining;
-(id)contentDispositionEncodingFallbackArray;
@end
