/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPCluster.h"


@interface CPCluster : XXUnknownSuperclass <CPDisposable> {
	XXStruct_lVmCAC* profile;
	unsigned xCount;
	double* x;
	double* dx;
	unsigned* dxOrderIndex;
	unsigned interClusterMinIndex;
	double* ddx;
	unsigned* ddxOrderIndex;
	unsigned interLevelMinIndex;
	unsigned minClusterSize;
	double maxClusterSpread;
	double minInterClusterDiff;
	double minInterLevel2ndDiff;
	unsigned clusterCount;
	XXStruct_VnwizD* xStats;
	unsigned levels;
	XXStruct_VnwizD* dxStats;
	BOOL ownData;
	BOOL ownDifferences;
}
+(unsigned*)createOrderIndexFor:(double*)aFor ofSize:(unsigned)size;
-(id)init;
-(id)initWithProfile:(const XXStruct_lVmCAC*)profile;
-(void)dispose;
-(void)finalize;
-(void)dealloc;
-(void)computeDifferencesFromData;
-(void)computeDataFromDifferences;
-(void)splitSecondDifferences;
-(void)assembleDifferenceStats;
-(BOOL)joinLevelsFrom:(unsigned)from to:(unsigned)to;
-(BOOL)joinClosestLevelPairFrom:(unsigned)from to:(unsigned)to;
-(BOOL)splitLevelAtIndex:(unsigned)index betweenValue:(double)value andValue:(double)value3;
-(BOOL)coalesceFrom:(unsigned)from to:(unsigned)to;
-(void)analyzeDifferences;
-(void)assembleDataStats;
-(void)setMinimumClusterSize:(unsigned)size;
-(void)setMaximumClusterSpread:(double)spread;
-(void)setMinimumRecognizedInterClusterDifference:(double)difference;
-(void)setMinimumRecognizedInterLevel2ndDifference:(double)difference;
-(void)assembleDensityDifferenceStats;
-(void)analyzeDensities;
-(void)findClusters:(double*)clusters count:(unsigned)count;
-(void)findClustersFromDifferences:(double*)differences count:(unsigned)count;
-(void)findDensityClusters:(double*)clusters count:(unsigned)count;
-(BOOL)applyDifferenceHints:(XXStruct_VnwizD*)hints count:(unsigned)count;
-(unsigned)clusterCount;
-(unsigned)levels;
-(XXStruct_VnwizD)clusterStatisticsAtIndex:(unsigned)index;
-(XXStruct_VnwizD)differenceClusterStatisticsAtIndex:(unsigned)index;
-(XXStruct_VnwizD)largestClusterStatistics;
@end

@interface CPCluster (CPAdditions)
+(void)clusterTextLine:(id)line;
+(void)reclusterTextLine:(id)line fromWordIndex:(unsigned)wordIndex count:(unsigned*)count;
-(void)tryLevel0SplitBetween:(double)between and:(double)anAnd usingHints:(XXStruct_VnwizD*)hints;
-(void)findClustersFromCharacterSequence:(id)characterSequence withSpaceHint:(BOOL)spaceHint;
-(void)makeWords:(XXStruct_NaTu4D*)words count:(unsigned)count fromCharacterSequence:(id)characterSequence charOffset:(unsigned)offset;
@end

