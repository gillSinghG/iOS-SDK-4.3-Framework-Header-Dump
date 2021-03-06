/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface WebCoreStatistics : XXUnknownSuperclass {
}
+(id)statistics;
+(unsigned long)javaScriptObjectsCount;
+(unsigned long)javaScriptGlobalObjectsCount;
+(unsigned long)javaScriptProtectedObjectsCount;
+(unsigned long)javaScriptProtectedGlobalObjectsCount;
+(id)javaScriptProtectedObjectTypeCounts;
+(id)javaScriptObjectTypeCounts;
+(void)garbageCollectJavaScriptObjects;
+(void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(BOOL)debugging;
+(unsigned long)iconPageURLMappingCount;
+(unsigned long)iconRetainedPageURLCount;
+(unsigned long)iconRecordCount;
+(unsigned long)iconsWithDataCount;
+(unsigned long)cachedFontDataCount;
+(unsigned long)cachedFontDataInactiveCount;
+(void)purgeInactiveFontData;
+(unsigned long)glyphPageCount;
+(BOOL)shouldPrintExceptions;
+(void)setShouldPrintExceptions:(BOOL)printExceptions;
+(void)emptyCache;
+(void)setCacheDisabled:(BOOL)disabled;
+(void)startIgnoringWebCoreNodeLeaks;
+(void)stopIgnoringWebCoreNodeLeaks;
+(id)memoryStatistics;
+(void)returnFreeMemoryToSystem;
+(int)cachedPageCount;
+(int)cachedFrameCount;
+(int)autoreleasedPageCount;
+(unsigned long)javaScriptNoGCAllowedObjectsCount;
+(unsigned long)javaScriptReferencedObjectsCount;
+(id)javaScriptRootObjectClasses;
+(unsigned long)javaScriptInterpretersCount;
+(id)javaScriptRootObjectTypeCounts;
@end

