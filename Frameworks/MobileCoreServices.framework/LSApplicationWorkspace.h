/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface LSApplicationWorkspace : XXUnknownSuperclass {
}
+(id)defaultWorkspace;
-(id)applicationsAvailableForOpeningDocument:(id)openingDocument;
-(id)operationToOpenResource:(id)openResource usingApplication:(id)application uniqueDocumentIdentifier:(id)identifier userInfo:(id)info delegate:(id)delegate;
-(id)operationToOpenResource:(id)openResource usingApplication:(id)application uniqueDocumentIdentifier:(id)identifier userInfo:(id)info;
-(id)operationToOpenResource:(id)openResource usingApplication:(id)application userInfo:(id)info;
-(BOOL)registerApplication:(id)application;
-(BOOL)unregisterApplication:(id)application;
@end

