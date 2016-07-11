/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPlatform : NSObject {
    bool  _lowPerformanceDevice;
    unsigned long long  _memSize;
    int  _numCPUs;
    bool  _proceduralRoadAlpha;
    bool  _supports3DBuildingStrokes;
    bool  _supportsBuildingStrokes;
    bool  _supportsCoastlineGlows;
    bool  _supportsPerFragmentLighting;
    bool  _useCheapTrafficShader;
}

@property (nonatomic, readonly) bool canMakeSharingThumbnails;
@property (nonatomic, readonly) bool isPad;
@property (nonatomic, readonly) bool lowPerformanceDevice;
@property (nonatomic, readonly) double mainScreenPPI;
@property (nonatomic, readonly) double mainScreenScale;
@property (nonatomic, readonly) double maxContentScaleForRendering;
@property (nonatomic, readonly) unsigned long long memorySize;
@property (nonatomic, readonly) bool proceduralRoadAlpha;
@property (nonatomic, readonly) bool roadsWithSimpleLineMeshesAvailable;
@property (nonatomic, readonly) double routeLineSimplificationEpsilon;
@property (nonatomic, readonly) bool shouldDrawWhenReady;
@property (nonatomic, readonly) bool shouldLayoutLabelsInParallel;
@property (nonatomic, readonly) bool shouldPregenerateLabelGlyphs;
@property (nonatomic, readonly) bool shouldStyleLabelsInParallel;
@property (nonatomic, readonly) bool supports3DBuildingStrokes;
@property (nonatomic, readonly) bool supports3DBuildings;
@property (nonatomic, readonly) bool supportsBuildingShadows;
@property (nonatomic, readonly) bool supportsBuildingStrokes;
@property (nonatomic, readonly) bool supportsCoastlineGlows;
@property (nonatomic, readonly) bool supportsHiResBuildings;
@property (nonatomic, readonly) bool supportsHiResRTT;
@property (nonatomic, readonly) bool supportsPerFragmentLighting;
@property (nonatomic, readonly) unsigned char tileDecodeQueueWidth;
@property (nonatomic, readonly) unsigned long long tileMaximumLimit;
@property (nonatomic, readonly) unsigned int tilePrefetchNumberOfScreens;
@property (nonatomic, readonly) bool useCheapTrafficShader;

+ (id)sharedPlatform;

- (unsigned long long)_calculateMemSize;
- (void)_determineHardware;
- (bool)canMakeSharingThumbnails;
- (void)dealloc;
- (id)init;
- (bool)isPad;
- (bool)lowPerformanceDevice;
- (double)mainScreenPPI;
- (double)mainScreenScale;
- (double)maxContentScaleForRendering;
- (unsigned long long)memorySize;
- (bool)proceduralRoadAlpha;
- (bool)roadsWithSimpleLineMeshesAvailable;
- (double)routeLineSimplificationEpsilon;
- (bool)shouldDrawWhenReady;
- (bool)shouldLayoutLabelsInParallel;
- (bool)shouldPregenerateLabelGlyphs;
- (bool)shouldStyleLabelsInParallel;
- (bool)supports3DBuildingStrokes;
- (bool)supports3DBuildings;
- (bool)supportsBuildingShadows;
- (bool)supportsBuildingStrokes;
- (bool)supportsCoastlineGlows;
- (bool)supportsHiResBuildings;
- (bool)supportsHiResRTT;
- (bool)supportsPerFragmentLighting;
- (unsigned char)tileDecodeQueueWidth;
- (unsigned long long)tileMaximumLimit;
- (unsigned int)tilePrefetchNumberOfScreens;
- (bool)useCheapTrafficShader;

@end