/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeature : NSObject <TSCHUnretainedParent> {
    NSArray * mCategoryAxisIDs;
    TSCHChartType * mChartType;
    NSArray * mValueAxisIDs;
}

@property (nonatomic, readonly, retain) NSArray *categoryAxisIDs;
@property (nonatomic, readonly, retain) NSArray *valueAxisIDs;

- (id)categoryAxisIDs;
- (id)categoryLabelPositioner;
- (void)clearParent;
- (id)columnShapeUIName;
- (void)dealloc;
- (id)defaultDataFileName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (bool)drawValueLabelsForZero;
- (id)filteredStyleOwnersFromStyleOwners:(id)arg1;
- (id)genericToSpecificPropertyMap;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1;
- (id)init;
- (id)initWithChartType:(id)arg1;
- (id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; long long x6; unsigned long long x7; })arg2;
- (bool)isHorizontal;
- (bool)isPie;
- (int)labelOrientation;
- (unsigned long long)maxCellsToCheckForGridValueType;
- (double)maxDepthRatio;
- (void)p_initializeAxisIDs;
- (Class)p_selectAxisClassForScale:(int)arg1 linearClass:(Class)arg2 logClass:(Class)arg3 percentClass:(Class)arg4;
- (Class)presetImagerClass;
- (int)representativeGridValueAxisType;
- (bool)requiresYAxisOrdinal;
- (bool)reverseSingleColumnLegendOrder;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (int)stackingSignRule;
- (Class)stageClass;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (bool)supportsBackgroundFill;
- (bool)supportsBorderFrame;
- (bool)supportsBubbleOptions;
- (bool)supportsCategoryAxisMinorTickmarks;
- (bool)supportsCategoryAxisSeriesNames;
- (bool)supportsCategoryLabelsInChartRangeEditor;
- (bool)supportsColumnShape;
- (bool)supportsConnectingLines;
- (bool)supportsEditing;
- (bool)supportsEditingForAxisID:(id)arg1;
- (bool)supportsElementChunking;
- (bool)supportsElementSeriesNames;
- (bool)supportsErrorBars;
- (bool)supportsGroupedShadows;
- (bool)supportsIndividualShadowRendering;
- (bool)supportsInterSetDepthGap;
- (bool)supportsLabelExplosion;
- (bool)supportsMoreThanOneLiveCategory;
- (bool)supportsMultipleSeriesTypes;
- (bool)supportsPercentNumberFormatting;
- (bool)supportsReferenceLines;
- (bool)supportsReverseChunking;
- (bool)supportsSeriesLabels;
- (bool)supportsSharedAndSeparateX;
- (bool)supportsShowLabelsInFrontOption;
- (bool)supportsSymbolOverhang;
- (bool)supportsTrendLines;
- (bool)supportsValueLabels;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (id)valueAxisIDs;
- (id)valueLabelPositioner;

@end