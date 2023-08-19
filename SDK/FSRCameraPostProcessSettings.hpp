#pragma once
#include <cstdint>
#include "FAnimatedBoolPropertyDriver.hpp"
#include "FAnimatedFloatPropertyDriver.hpp"
#include "FAnimatedIntegerPropertyDriver.hpp"
#include "FAnimatedVectorPropertyDriver.hpp"
#pragma pack(push, 1)
struct FSRCameraPostProcessSettings {
    FAnimatedFloatPropertyDriver SceneFringeIntensity; // 0x0
    FAnimatedFloatPropertyDriver VignetteIntensity; // 0x28
    FAnimatedFloatPropertyDriver GrainJitter; // 0x50
    FAnimatedFloatPropertyDriver GrainIntensity; // 0x78
    FAnimatedIntegerPropertyDriver BloomMethod; // 0xa0
    FAnimatedFloatPropertyDriver BloomIntensity; // 0xc8
    FAnimatedFloatPropertyDriver BloomThreshold; // 0xf0
    FAnimatedFloatPropertyDriver BloomCross; // 0x118
    FAnimatedFloatPropertyDriver BloomDirtMaskIntensity; // 0x140
    FAnimatedVectorPropertyDriver BloomDirtMaskTint; // 0x168
    FAnimatedIntegerPropertyDriver AutoExposureMethod; // 0x1b0
    FAnimatedFloatPropertyDriver AutoExposureLowPercent; // 0x1d8
    FAnimatedFloatPropertyDriver AutoExposureHighPercent; // 0x200
    FAnimatedFloatPropertyDriver AutoExposureMinBrightness; // 0x228
    FAnimatedFloatPropertyDriver AutoExposureMaxBrightness; // 0x250
    FAnimatedFloatPropertyDriver AutoExposureSpeedUp; // 0x278
    FAnimatedFloatPropertyDriver AutoExposureSpeedDown; // 0x2a0
    FAnimatedFloatPropertyDriver AutoExposureBias; // 0x2c8
    FAnimatedFloatPropertyDriver HistogramLogMax; // 0x2f0
    FAnimatedFloatPropertyDriver HistogramLogMin; // 0x318
    FAnimatedIntegerPropertyDriver DepthOfFieldMethod; // 0x340
    FAnimatedFloatPropertyDriver DepthOfFieldFstop; // 0x368
    FAnimatedFloatPropertyDriver DepthOfFieldSensorWidth; // 0x390
    FAnimatedFloatPropertyDriver DepthOfFieldFocalDistance; // 0x3b8
    FAnimatedFloatPropertyDriver DepthOfFieldDepthBlurAmount; // 0x3e0
    FAnimatedFloatPropertyDriver DepthOfFieldDepthBlurRadius; // 0x408
    FAnimatedFloatPropertyDriver DepthOfFieldFocalRegion; // 0x430
    FAnimatedFloatPropertyDriver DepthOfFieldNearTransitionRegion; // 0x458
    FAnimatedFloatPropertyDriver DepthOfFieldFarTransitionRegion; // 0x480
    FAnimatedFloatPropertyDriver DepthOfFieldScale; // 0x4a8
    FAnimatedFloatPropertyDriver DepthOfFieldMaxBokehSize; // 0x4d0
    FAnimatedFloatPropertyDriver DepthOfFieldNearBlurSize; // 0x4f8
    FAnimatedFloatPropertyDriver DepthOfFieldFarBlurSize; // 0x520
    FAnimatedFloatPropertyDriver DepthOfFieldOcclusion; // 0x548
    FAnimatedFloatPropertyDriver DepthOfFieldColorThreshold; // 0x570
    FAnimatedFloatPropertyDriver DepthOfFieldSizeThreshold; // 0x598
    FAnimatedFloatPropertyDriver DepthOfFieldSkyFocusDistance; // 0x5c0
    FAnimatedFloatPropertyDriver DepthOfFieldVignetteSize; // 0x5e8
    FAnimatedFloatPropertyDriver AmbientOcclusionIntensity; // 0x610
    FAnimatedFloatPropertyDriver AmbientOcclusionRadius; // 0x638
    FAnimatedFloatPropertyDriver AmbientOcclusionStaticFraction; // 0x660
    FAnimatedBoolPropertyDriver AmbientOcclusionRadiusInWS; // 0x688
    FAnimatedFloatPropertyDriver AmbientOcclusionFadeDistance; // 0x6b0
    FAnimatedFloatPropertyDriver AmbientOcclusionFadeRadius; // 0x6d8
    FAnimatedFloatPropertyDriver AmbientOcclusionPower; // 0x700
    FAnimatedFloatPropertyDriver AmbientOcclusionBias; // 0x728
    FAnimatedFloatPropertyDriver AmbientOcclusionQuality; // 0x750
    FAnimatedVectorPropertyDriver IndirectLightingColor; // 0x778
    FAnimatedFloatPropertyDriver IndirectLightingIntensity; // 0x7c0
    FAnimatedFloatPropertyDriver MotionBlurAmount; // 0x7e8
    FAnimatedFloatPropertyDriver MotionBlurMax; // 0x810
    FAnimatedFloatPropertyDriver MotionBlurPerObjectSize; // 0x838
}; // Size: 0x860
#pragma pack(pop)
