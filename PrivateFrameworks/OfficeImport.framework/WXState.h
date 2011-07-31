/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSMutableArray, WXOAVState, SFUNoCopyDictionary, OAXDrawingState, WDDocument, OCPPackagePart;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface WXState : XXUnknownSuperclass {
@private
	WDDocument* mDocument;
	SFUNoCopyDictionary* mTextNodesToBeAdded;
	SFUNoCopyDictionary* mMapBookmarkIdToName;
	SFUNoCopyDictionary* mMapAnnotationIdToAnnotation;
	OCPPackagePart* mPackagePart;
	OCPPackagePart* mAnnotationPart;
	xmlDoc* mFootnoteDocument;
	xmlNode* mFootnotes;
	xmlDoc* mEndnoteDocument;
	xmlNode* mEndnotes;
	xmlDoc* mAnnotationDocument;
	xmlNode* mAnnotations;
	NSMutableArray* mDeleteAuthorStack;
	NSMutableArray* mDeleteDateStack;
	NSMutableArray* mEditAuthorStack;
	NSMutableArray* mEditDateStack;
	NSMutableArray* mFormatAuthorStack;
	NSMutableArray* mFormatDateStack;
	WXOAVState* mWXOavState;
	OAXDrawingState* mDrawingState;
	int mCurrentOfficeArtTextType;
	BOOL mNewSectionRequested;
	unsigned long mCurrentRowCNFStyle;
	unsigned long mCurrentCellCNFStyle;
	BOOL mCurrentTableWraps;
	id<OCCancelDelegate> mCancelDelegate;
	BOOL mIsThumbnail;
}
@property(assign, nonatomic) int currentOfficeArtTextType;
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;
-(id)init;
-(id)initNoStacksWith:(id)with;
-(void)dealloc;
-(id)document;
-(void)setDocument:(id)document;
-(void)addText:(id)text node:(xmlNode*)node;
-(id)nodesToBeAdded:(id)beAdded;
-(void)clearOutNodesToBeAdded:(id)beAdded;
-(void)addBookmarkId:(int)anId name:(id)name;
-(id)bookmarkName:(int)name;
-(void)addAnnotationID:(long)anId annotation:(id)annotation;
-(id)annotationWithID:(long)anId;
-(xmlNode*)xmlFootnoteWithID:(long)anId;
-(xmlNode*)xmlEndnoteWithID:(long)anId;
-(xmlNode*)xmlAnnotationWithID:(long)anId;
-(id)packagePart;
-(void)setPackagePart:(id)part;
-(id)annotationPart;
-(void)setAnnotationPart:(id)part;
-(void)setDocumentPart:(id)part;
-(id)wxoavState;
-(void)pushDeleteAuthor:(id)author date:(id)date;
-(void)popDeleteAuthorDate;
-(id)currentDeleteAuthor;
-(id)currentDeleteDate;
-(void)pushEditAuthor:(id)author date:(id)date;
-(void)popEditAuthorDate;
-(id)currentEditAuthor;
-(id)currentEditDate;
-(void)pushFormatAuthor:(id)author date:(id)date;
-(void)popFormatAuthorDate;
-(id)currentFormatAuthor;
-(id)currentFormatDate;
-(id)drawingState;
-(BOOL)isNewSectionRequested;
-(void)setNewSectionRequested:(BOOL)requested;
-(unsigned long)currentRowCNFStyle;
-(void)setCurrentRowCNFStyle:(unsigned long)style;
-(unsigned long)currentCellCNFStyle;
-(void)setCurrentCellCNFStyle:(unsigned long)style;
-(void)setCurrentTableWraps:(BOOL)wraps;
-(BOOL)currentTableWraps;
-(void)setIsThumbnail:(BOOL)thumbnail;
-(BOOL)isThumbnail;
@end
