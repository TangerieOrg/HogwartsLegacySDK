#pragma once
#include <cstdint>
#include "EAutoExposureMethod.hpp"
#include "EBloomMethod.hpp"
#include "ERayTracingGlobalIlluminationType.hpp"
#include "EReflectedAndRefractedRayTracedShadows.hpp"
#include "EReflectionsType.hpp"
#include "ETemperatureMethod.hpp"
#include "ETranslucencyType.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "FVector4.hpp"
#include "FWeightedBlendables.hpp"
class UTexture2D;
class UTexture;
class UTextureCube;
class UCurveFloat;
#pragma pack(push, 1)
struct FPostProcessSettings {
    uint8_t bOverride_TemperatureType : 1; // 0x0
    uint8_t bOverride_WhiteTemp : 1; // 0x0
    uint8_t bOverride_WhiteTint : 1; // 0x0
    uint8_t bOverride_ColorSaturation : 1; // 0x0
    uint8_t bOverride_ColorContrast : 1; // 0x0
    uint8_t bOverride_ColorGamma : 1; // 0x0
    uint8_t bOverride_ColorGain : 1; // 0x0
    uint8_t bOverride_ColorOffset : 1; // 0x0
    uint8_t bOverride_ColorSaturationShadows : 1; // 0x1
    uint8_t bOverride_ColorContrastShadows : 1; // 0x1
    uint8_t bOverride_ColorGammaShadows : 1; // 0x1
    uint8_t bOverride_ColorGainShadows : 1; // 0x1
    uint8_t bOverride_ColorOffsetShadows : 1; // 0x1
    uint8_t bOverride_ColorSaturationMidtones : 1; // 0x1
    uint8_t bOverride_ColorContrastMidtones : 1; // 0x1
    uint8_t bOverride_ColorGammaMidtones : 1; // 0x1
    uint8_t bOverride_ColorGainMidtones : 1; // 0x2
    uint8_t bOverride_ColorOffsetMidtones : 1; // 0x2
    uint8_t bOverride_ColorSaturationHighlights : 1; // 0x2
    uint8_t bOverride_ColorContrastHighlights : 1; // 0x2
    uint8_t bOverride_ColorGammaHighlights : 1; // 0x2
    uint8_t bOverride_ColorGainHighlights : 1; // 0x2
    uint8_t bOverride_ColorOffsetHighlights : 1; // 0x2
    uint8_t bOverride_ColorCorrectionShadowsMax : 1; // 0x2
    uint8_t bOverride_ColorCorrectionHighlightsMin : 1; // 0x3
    uint8_t bOverride_BlueCorrection : 1; // 0x3
    uint8_t bOverride_ExpandGamut : 1; // 0x3
    uint8_t bOverride_ToneCurveAmount : 1; // 0x3
    uint8_t bOverride_FilmWhitePoint : 1; // 0x3
    uint8_t bOverride_FilmSaturation : 1; // 0x3
    uint8_t bOverride_FilmChannelMixerRed : 1; // 0x3
    uint8_t bOverride_FilmChannelMixerGreen : 1; // 0x3
    uint8_t bOverride_FilmChannelMixerBlue : 1; // 0x4
    uint8_t bOverride_FilmContrast : 1; // 0x4
    uint8_t bOverride_FilmDynamicRange : 1; // 0x4
    uint8_t bOverride_FilmHealAmount : 1; // 0x4
    uint8_t bOverride_FilmToeAmount : 1; // 0x4
    uint8_t bOverride_FilmShadowTint : 1; // 0x4
    uint8_t bOverride_FilmShadowTintBlend : 1; // 0x4
    uint8_t bOverride_FilmShadowTintAmount : 1; // 0x4
    uint8_t bOverride_FilmSlope : 1; // 0x5
    uint8_t bOverride_FilmToe : 1; // 0x5
    uint8_t bOverride_FilmShoulder : 1; // 0x5
    uint8_t bOverride_FilmBlackClip : 1; // 0x5
    uint8_t bOverride_FilmWhiteClip : 1; // 0x5
    uint8_t bOverride_SceneColorTint : 1; // 0x5
    uint8_t bOverride_SceneFringeIntensity : 1; // 0x5
    uint8_t bOverride_ChromaticAberrationStartOffset : 1; // 0x5
    uint8_t bOverride_AmbientCubemapTint : 1; // 0x6
    uint8_t bOverride_AmbientCubemapIntensity : 1; // 0x6
    uint8_t bOverride_BloomMethod : 1; // 0x6
    uint8_t bOverride_BloomIntensity : 1; // 0x6
    uint8_t bOverride_BloomThreshold : 1; // 0x6
    uint8_t bOverride_BloomCross : 1; // 0x6
    uint8_t bOverride_Bloom1Tint : 1; // 0x6
    uint8_t bOverride_Bloom1Size : 1; // 0x6
    uint8_t bOverride_Bloom2Size : 1; // 0x7
    uint8_t bOverride_Bloom2Tint : 1; // 0x7
    uint8_t bOverride_Bloom3Tint : 1; // 0x7
    uint8_t bOverride_Bloom3Size : 1; // 0x7
    uint8_t bOverride_Bloom4Tint : 1; // 0x7
    uint8_t bOverride_Bloom4Size : 1; // 0x7
    uint8_t bOverride_Bloom5Tint : 1; // 0x7
    uint8_t bOverride_Bloom5Size : 1; // 0x7
    uint8_t bOverride_Bloom6Tint : 1; // 0x8
    uint8_t bOverride_Bloom6Size : 1; // 0x8
    uint8_t bOverride_BloomSizeScale : 1; // 0x8
    uint8_t bOverride_BloomConvolutionTexture : 1; // 0x8
    uint8_t bOverride_BloomConvolutionSize : 1; // 0x8
    uint8_t bOverride_BloomConvolutionCenterUV : 1; // 0x8
    uint8_t bOverride_BloomConvolutionPreFilter : 1; // 0x8
    uint8_t bOverride_BloomConvolutionPreFilterMin : 1; // 0x8
    uint8_t bOverride_BloomConvolutionPreFilterMax : 1; // 0x9
    uint8_t bOverride_BloomConvolutionPreFilterMult : 1; // 0x9
    uint8_t bOverride_BloomConvolutionBufferScale : 1; // 0x9
    uint8_t bOverride_BloomDirtMaskIntensity : 1; // 0x9
    uint8_t bOverride_BloomDirtMaskTint : 1; // 0x9
    uint8_t bOverride_BloomDirtMask : 1; // 0x9
    uint8_t bOverride_CameraShutterSpeed : 1; // 0x9
    uint8_t bOverride_CameraISO : 1; // 0x9
    uint8_t bOverride_AutoExposureMethod : 1; // 0xa
    uint8_t bOverride_AutoExposureLowPercent : 1; // 0xa
    uint8_t bOverride_AutoExposureHighPercent : 1; // 0xa
    uint8_t bOverride_AutoExposureMinBrightness : 1; // 0xa
    uint8_t bOverride_AutoExposureMaxBrightness : 1; // 0xa
    uint8_t bOverride_AutoExposureCalibrationConstant : 1; // 0xa
    uint8_t bOverride_AutoExposureSpeedUp : 1; // 0xa
    uint8_t bOverride_AutoExposureSpeedDown : 1; // 0xa
    uint8_t bOverride_AutoExposureBias : 1; // 0xb
    uint8_t bOverride_AutoExposureBiasVFX : 1; // 0xb
    uint8_t bOverride_AutoExposureBiasCurve : 1; // 0xb
    uint8_t bOverride_AutoExposureMeterMask : 1; // 0xb
    uint8_t bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0xb
    uint8_t bOverride_HistogramLogMin : 1; // 0xb
    uint8_t bOverride_HistogramLogMax : 1; // 0xb
    uint8_t bOverride_PreExposureResetValue : 1; // 0xb
    uint8_t bOverride_PreExposureMinValue : 1; // 0xc
    uint8_t bOverride_PreExposureMaxValue : 1; // 0xc
    uint8_t bOverride_LensFlareIntensity : 1; // 0xc
    uint8_t bOverride_LensFlareTint : 1; // 0xc
    uint8_t bOverride_LensFlareTints : 1; // 0xc
    uint8_t bOverride_LensFlareBokehSize : 1; // 0xc
    uint8_t bOverride_LensFlareBokehShape : 1; // 0xc
    uint8_t bOverride_LensFlareThreshold : 1; // 0xc
    uint8_t bOverride_VignetteIntensity : 1; // 0xd
    uint8_t bOverride_GrainIntensity : 1; // 0xd
    uint8_t bOverride_GrainJitter : 1; // 0xd
    uint8_t bOverride_AmbientOcclusionIntensity : 1; // 0xd
    uint8_t bOverride_AmbientOcclusionStaticFraction : 1; // 0xd
    uint8_t bOverride_AmbientOcclusionRadius : 1; // 0xd
    uint8_t bOverride_AmbientOcclusionFadeDistance : 1; // 0xd
    uint8_t bOverride_AmbientOcclusionFadeRadius : 1; // 0xd
    uint8_t bOverride_AmbientOcclusionDistance : 1; // 0xe
    uint8_t bOverride_AmbientOcclusionRadiusInWS : 1; // 0xe
    uint8_t bOverride_AmbientOcclusionPower : 1; // 0xe
    uint8_t bOverride_AmbientOcclusionBias : 1; // 0xe
    uint8_t bOverride_AmbientOcclusionQuality : 1; // 0xe
    uint8_t bOverride_AmbientOcclusionMipBlend : 1; // 0xe
    uint8_t bOverride_AmbientOcclusionMipScale : 1; // 0xe
    uint8_t bOverride_AmbientOcclusionMipThreshold : 1; // 0xe
    uint8_t bOverride_AmbientOcclusionSkinIntensity : 1; // 0xf
    uint8_t bOverride_AmbientOcclusionTemporalBlendWeight : 1; // 0xf
    uint8_t pad_bitfield_f_2 : 6;
    uint8_t bOverride_RayTracingAO : 1; // 0x10
    uint8_t bOverride_RayTracingAOSamplesPerPixel : 1; // 0x10
    uint8_t bOverride_RayTracingAOIntensity : 1; // 0x10
    uint8_t bOverride_RayTracingAORadius : 1; // 0x10
    uint8_t pad_bitfield_10_4 : 4;
    char pad_11[0x3];
    uint8_t bOverride_LPVIntensity : 1; // 0x14
    uint8_t bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x14
    uint8_t bOverride_LPVDirectionalOcclusionRadius : 1; // 0x14
    uint8_t bOverride_LPVDiffuseOcclusionExponent : 1; // 0x14
    uint8_t bOverride_LPVSpecularOcclusionExponent : 1; // 0x14
    uint8_t bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x14
    uint8_t bOverride_LPVSpecularOcclusionIntensity : 1; // 0x14
    uint8_t bOverride_LPVSize : 1; // 0x14
    uint8_t bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x15
    uint8_t bOverride_LPVSecondaryBounceIntensity : 1; // 0x15
    uint8_t bOverride_LPVGeometryVolumeBias : 1; // 0x15
    uint8_t bOverride_LPVVplInjectionBias : 1; // 0x15
    uint8_t bOverride_LPVEmissiveInjectionIntensity : 1; // 0x15
    uint8_t bOverride_LPVFadeRange : 1; // 0x15
    uint8_t bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x15
    uint8_t bOverride_SimpleLightDemotionDistance : 1; // 0x15
    uint8_t bOverride_SimpleLightSpecularFadeEndMultiplier : 1; // 0x16
    uint8_t bOverride_IndirectLightingColor : 1; // 0x16
    uint8_t bOverride_IndirectLightingIntensity : 1; // 0x16
    uint8_t bOverride_ProbeToneMapAmount : 1; // 0x16
    uint8_t bOverride_ProbeToneMapMinIntensity : 1; // 0x16
    uint8_t bOverride_ProbeToneMapMaxEV : 1; // 0x16
    uint8_t bOverride_ProbeOutsideIntensity : 1; // 0x16
    uint8_t bOverride_ProbeInsideIntensity : 1; // 0x16
    uint8_t bOverride_ProbeOutsideSaturation : 1; // 0x17
    uint8_t bOverride_ProbeInsideSaturation : 1; // 0x17
    uint8_t bOverride_ProbeSamplePositionMultiplier : 1; // 0x17
    uint8_t bOverride_ProbeSamplePositionMin : 1; // 0x17
    uint8_t bOverride_ProbeSamplePositionMax : 1; // 0x17
    uint8_t bOverride_ProbeContactShadowsMinValue : 1; // 0x17
    uint8_t bOverride_ProbeContactShadowsLength : 1; // 0x17
    uint8_t bOverride_ProbeContactShadowsConeAngle : 1; // 0x17
    uint8_t bOverride_ProbeContactShadowsFalloffExponent : 1; // 0x18
    uint8_t bOverride_ProbeContactShadowsDepthTolerance : 1; // 0x18
    uint8_t bOverride_ColorGradingIntensity : 1; // 0x18
    uint8_t bOverride_ColorGradingLUT : 1; // 0x18
    uint8_t bOverride_DepthOfFieldFocalDistance : 1; // 0x18
    uint8_t bOverride_DepthOfFieldFstop : 1; // 0x18
    uint8_t bOverride_DepthOfFieldMinFstop : 1; // 0x18
    uint8_t bOverride_DepthOfFieldBladeCount : 1; // 0x18
    uint8_t bOverride_DepthOfFieldSensorWidth : 1; // 0x19
    uint8_t bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x19
    uint8_t bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x19
    uint8_t bOverride_DepthOfFieldFocalRegion : 1; // 0x19
    uint8_t bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x19
    uint8_t bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x19
    uint8_t bOverride_DepthOfFieldScale : 1; // 0x19
    uint8_t bOverride_DepthOfFieldNearBlurSize : 1; // 0x19
    uint8_t bOverride_DepthOfFieldFarBlurSize : 1; // 0x1a
    uint8_t bOverride_MobileHQGaussian : 1; // 0x1a
    uint8_t bOverride_DepthOfFieldOcclusion : 1; // 0x1a
    uint8_t bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x1a
    uint8_t bOverride_DepthOfFieldVignetteSize : 1; // 0x1a
    uint8_t bOverride_MotionBlurAmount : 1; // 0x1a
    uint8_t bOverride_MotionBlurMax : 1; // 0x1a
    uint8_t bOverride_MotionBlurTargetFPS : 1; // 0x1a
    uint8_t bOverride_MotionBlurPerObjectSize : 1; // 0x1b
    uint8_t bOverride_ScreenPercentage : 1; // 0x1b
    uint8_t bOverride_ScreenSpaceReflectionIntensity : 1; // 0x1b
    uint8_t bOverride_ScreenSpaceReflectionQuality : 1; // 0x1b
    uint8_t bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x1b
    uint8_t bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x1b
    uint8_t pad_bitfield_1b_6 : 2;
    uint8_t bOverride_ReflectionsType : 1; // 0x1c
    uint8_t pad_bitfield_1c_1 : 7;
    char pad_1d[0x3];
    uint8_t bOverride_ReflectionCaptureOutsideSaturation : 1; // 0x20
    uint8_t bOverride_ReflectionCaptureOutsideColorTint : 1; // 0x20
    uint8_t bOverride_ReflectionCaptureInsideSaturation : 1; // 0x20
    uint8_t bOverride_ReflectionCaptureInsideColorTint : 1; // 0x20
    uint8_t pad_bitfield_20_4 : 4;
    char pad_21[0x3];
    uint8_t bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x24
    uint8_t bOverride_RayTracingReflectionsMaxBounces : 1; // 0x24
    uint8_t bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x24
    uint8_t bOverride_RayTracingReflectionsShadows : 1; // 0x24
    uint8_t bOverride_RayTracingReflectionsTranslucency : 1; // 0x24
    uint8_t bOverride_TranslucencyType : 1; // 0x24
    uint8_t bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x24
    uint8_t bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x24
    uint8_t bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x25
    uint8_t bOverride_RayTracingTranslucencyShadows : 1; // 0x25
    uint8_t bOverride_RayTracingTranslucencyRefraction : 1; // 0x25
    uint8_t bOverride_RayTracingGI : 1; // 0x25
    uint8_t bOverride_RayTracingGIMaxBounces : 1; // 0x25
    uint8_t bOverride_RayTracingGISamplesPerPixel : 1; // 0x25
    uint8_t bOverride_PathTracingMaxBounces : 1; // 0x25
    uint8_t bOverride_PathTracingSamplesPerPixel : 1; // 0x25
    uint8_t bOverride_PathTracingFilterWidth : 1; // 0x26
    uint8_t bOverride_PathTracingEnableEmissive : 1; // 0x26
    uint8_t bOverride_PathTracingMaxPathExposure : 1; // 0x26
    uint8_t bOverride_PathTracingEnableDenoiser : 1; // 0x26
    uint8_t pad_bitfield_26_4 : 4;
    char pad_27[0x1];
    uint8_t bMobileHQGaussian : 1; // 0x28
    uint8_t pad_bitfield_28_1 : 7;
    EBloomMethod BloomMethod; // 0x29
    EAutoExposureMethod AutoExposureMethod; // 0x2a
    ETemperatureMethod TemperatureType; // 0x2b
    float WhiteTemp; // 0x2c
    float WhiteTint; // 0x30
    char pad_34[0xc];
    FVector4 ColorSaturation; // 0x40
    FVector4 ColorContrast; // 0x50
    FVector4 ColorGamma; // 0x60
    FVector4 ColorGain; // 0x70
    FVector4 ColorOffset; // 0x80
    FVector4 ColorSaturationShadows; // 0x90
    FVector4 ColorContrastShadows; // 0xa0
    FVector4 ColorGammaShadows; // 0xb0
    FVector4 ColorGainShadows; // 0xc0
    FVector4 ColorOffsetShadows; // 0xd0
    FVector4 ColorSaturationMidtones; // 0xe0
    FVector4 ColorContrastMidtones; // 0xf0
    FVector4 ColorGammaMidtones; // 0x100
    FVector4 ColorGainMidtones; // 0x110
    FVector4 ColorOffsetMidtones; // 0x120
    FVector4 ColorSaturationHighlights; // 0x130
    FVector4 ColorContrastHighlights; // 0x140
    FVector4 ColorGammaHighlights; // 0x150
    FVector4 ColorGainHighlights; // 0x160
    FVector4 ColorOffsetHighlights; // 0x170
    float ColorCorrectionHighlightsMin; // 0x180
    float ColorCorrectionShadowsMax; // 0x184
    float BlueCorrection; // 0x188
    float ExpandGamut; // 0x18c
    float ToneCurveAmount; // 0x190
    float FilmSlope; // 0x194
    float FilmToe; // 0x198
    float FilmShoulder; // 0x19c
    float FilmBlackClip; // 0x1a0
    float FilmWhiteClip; // 0x1a4
    FLinearColor FilmWhitePoint; // 0x1a8
    FLinearColor FilmShadowTint; // 0x1b8
    float FilmShadowTintBlend; // 0x1c8
    float FilmShadowTintAmount; // 0x1cc
    float FilmSaturation; // 0x1d0
    FLinearColor FilmChannelMixerRed; // 0x1d4
    FLinearColor FilmChannelMixerGreen; // 0x1e4
    FLinearColor FilmChannelMixerBlue; // 0x1f4
    float FilmContrast; // 0x204
    float FilmToeAmount; // 0x208
    float FilmHealAmount; // 0x20c
    float FilmDynamicRange; // 0x210
    FLinearColor SceneColorTint; // 0x214
    float SceneFringeIntensity; // 0x224
    float ChromaticAberrationStartOffset; // 0x228
    float BloomIntensity; // 0x22c
    float BloomThreshold; // 0x230
    float BloomCross; // 0x234
    float BloomSizeScale; // 0x238
    float Bloom1Size; // 0x23c
    float Bloom2Size; // 0x240
    float Bloom3Size; // 0x244
    float Bloom4Size; // 0x248
    float Bloom5Size; // 0x24c
    float Bloom6Size; // 0x250
    FLinearColor Bloom1Tint; // 0x254
    FLinearColor Bloom2Tint; // 0x264
    FLinearColor Bloom3Tint; // 0x274
    FLinearColor Bloom4Tint; // 0x284
    FLinearColor Bloom5Tint; // 0x294
    FLinearColor Bloom6Tint; // 0x2a4
    float BloomConvolutionSize; // 0x2b4
    UTexture2D* BloomConvolutionTexture; // 0x2b8
    FVector2D BloomConvolutionCenterUV; // 0x2c0
    float BloomConvolutionPreFilterMin; // 0x2c8
    float BloomConvolutionPreFilterMax; // 0x2cc
    float BloomConvolutionPreFilterMult; // 0x2d0
    float BloomConvolutionBufferScale; // 0x2d4
    UTexture* BloomDirtMask; // 0x2d8
    float BloomDirtMaskIntensity; // 0x2e0
    FLinearColor BloomDirtMaskTint; // 0x2e4
    FLinearColor AmbientCubemapTint; // 0x2f4
    float AmbientCubemapIntensity; // 0x304
    UTextureCube* AmbientCubemap; // 0x308
    float CameraShutterSpeed; // 0x310
    float CameraISO; // 0x314
    float DepthOfFieldFstop; // 0x318
    float DepthOfFieldMinFstop; // 0x31c
    int32_t DepthOfFieldBladeCount; // 0x320
    float AutoExposureBias; // 0x324
    float AutoExposureBiasVFX; // 0x328
    float AutoExposureBiasBackup; // 0x32c
    uint8_t bOverride_AutoExposureBiasBackup : 1; // 0x330
    uint8_t pad_bitfield_330_1 : 7;
    char pad_331[0x3];
    uint8_t AutoExposureApplyPhysicalCameraExposure : 1; // 0x334
    uint8_t pad_bitfield_334_1 : 7;
    char pad_335[0x3];
    UCurveFloat* AutoExposureBiasCurve; // 0x338
    UTexture* AutoExposureMeterMask; // 0x340
    float AutoExposureLowPercent; // 0x348
    float AutoExposureHighPercent; // 0x34c
    float AutoExposureMinBrightness; // 0x350
    float AutoExposureMaxBrightness; // 0x354
    float AutoExposureSpeedUp; // 0x358
    float AutoExposureSpeedDown; // 0x35c
    float HistogramLogMin; // 0x360
    float HistogramLogMax; // 0x364
    float PreExposureResetValue; // 0x368
    float PreExposureMinValue; // 0x36c
    float PreExposureMaxValue; // 0x370
    float AutoExposureCalibrationConstant; // 0x374
    float LensFlareIntensity; // 0x378
    FLinearColor LensFlareTint; // 0x37c
    float LensFlareBokehSize; // 0x38c
    float LensFlareThreshold; // 0x390
    char pad_394[0x4];
    UTexture* LensFlareBokehShape; // 0x398
    FLinearColor LensFlareTints[8]; // 0x3a0
    float VignetteIntensity; // 0x420
    float GrainJitter; // 0x424
    float GrainIntensity; // 0x428
    float AmbientOcclusionIntensity; // 0x42c
    float AmbientOcclusionStaticFraction; // 0x430
    float AmbientOcclusionRadius; // 0x434
    uint8_t AmbientOcclusionRadiusInWS : 1; // 0x438
    uint8_t pad_bitfield_438_1 : 7;
    char pad_439[0x3];
    float AmbientOcclusionFadeDistance; // 0x43c
    float AmbientOcclusionFadeRadius; // 0x440
    float AmbientOcclusionDistance; // 0x444
    float AmbientOcclusionPower; // 0x448
    float AmbientOcclusionBias; // 0x44c
    float AmbientOcclusionQuality; // 0x450
    float AmbientOcclusionMipBlend; // 0x454
    float AmbientOcclusionMipScale; // 0x458
    float AmbientOcclusionMipThreshold; // 0x45c
    float AmbientOcclusionTemporalBlendWeight; // 0x460
    uint8_t RayTracingAO : 1; // 0x464
    uint8_t pad_bitfield_464_1 : 7;
    char pad_465[0x3];
    float AmbientOcclusionSkinIntensity; // 0x468
    int32_t RayTracingAOSamplesPerPixel; // 0x46c
    float RayTracingAOIntensity; // 0x470
    float RayTracingAORadius; // 0x474
    FLinearColor IndirectLightingColor; // 0x478
    float IndirectLightingIntensity; // 0x488
    float ProbeToneMapAmount; // 0x48c
    float ProbeToneMapMinIntensity; // 0x490
    float ProbeToneMapMaxEV; // 0x494
    float ProbeOutsideIntensity; // 0x498
    float ProbeInsideIntensity; // 0x49c
    float ProbeOutsideSaturation; // 0x4a0
    float ProbeInsideSaturation; // 0x4a4
    float ProbeSamplePositionMultiplier; // 0x4a8
    float ProbeSamplePositionMin; // 0x4ac
    float ProbeSamplePositionMax; // 0x4b0
    float ProbeContactShadowsMinValue; // 0x4b4
    float ProbeContactShadowsLength; // 0x4b8
    float ProbeContactShadowsConeAngle; // 0x4bc
    float ProbeContactShadowsFalloffExponent; // 0x4c0
    float ProbeContactShadowsDepthTolerance; // 0x4c4
    ERayTracingGlobalIlluminationType RayTracingGIType; // 0x4c8
    char pad_4c9[0x3];
    int32_t RayTracingGIMaxBounces; // 0x4cc
    int32_t RayTracingGISamplesPerPixel; // 0x4d0
    float ColorGradingIntensity; // 0x4d4
    UTexture* ColorGradingLUT; // 0x4d8
    float DepthOfFieldSensorWidth; // 0x4e0
    float DepthOfFieldFocalDistance; // 0x4e4
    float DepthOfFieldDepthBlurAmount; // 0x4e8
    float DepthOfFieldDepthBlurRadius; // 0x4ec
    float DepthOfFieldFocalRegion; // 0x4f0
    float DepthOfFieldNearTransitionRegion; // 0x4f4
    float DepthOfFieldFarTransitionRegion; // 0x4f8
    float DepthOfFieldScale; // 0x4fc
    float DepthOfFieldNearBlurSize; // 0x500
    float DepthOfFieldFarBlurSize; // 0x504
    float DepthOfFieldOcclusion; // 0x508
    float DepthOfFieldSkyFocusDistance; // 0x50c
    float DepthOfFieldVignetteSize; // 0x510
    float MotionBlurAmount; // 0x514
    float MotionBlurMax; // 0x518
    int32_t MotionBlurTargetFPS; // 0x51c
    float MotionBlurPerObjectSize; // 0x520
    float LPVIntensity; // 0x524
    float LPVVplInjectionBias; // 0x528
    float LPVSize; // 0x52c
    float LPVSecondaryOcclusionIntensity; // 0x530
    float LPVSecondaryBounceIntensity; // 0x534
    float LPVGeometryVolumeBias; // 0x538
    float LPVEmissiveInjectionIntensity; // 0x53c
    float LPVDirectionalOcclusionIntensity; // 0x540
    float LPVDirectionalOcclusionRadius; // 0x544
    float LPVDiffuseOcclusionExponent; // 0x548
    float LPVSpecularOcclusionExponent; // 0x54c
    float LPVDiffuseOcclusionIntensity; // 0x550
    float LPVSpecularOcclusionIntensity; // 0x554
    EReflectionsType ReflectionsType; // 0x558
    char pad_559[0x3];
    float ReflectionCaptureOutsideSaturation; // 0x55c
    FLinearColor ReflectionCaptureOutsideColorTint; // 0x560
    float ReflectionCaptureInsideSaturation; // 0x570
    FLinearColor ReflectionCaptureInsideColorTint; // 0x574
    float ScreenSpaceReflectionIntensity; // 0x584
    float ScreenSpaceReflectionQuality; // 0x588
    float ScreenSpaceReflectionMaxRoughness; // 0x58c
    float RayTracingReflectionsMaxRoughness; // 0x590
    int32_t RayTracingReflectionsMaxBounces; // 0x594
    int32_t RayTracingReflectionsSamplesPerPixel; // 0x598
    EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x59c
    uint8_t RayTracingReflectionsTranslucency : 1; // 0x59d
    uint8_t pad_bitfield_59d_1 : 7;
    ETranslucencyType TranslucencyType; // 0x59e
    char pad_59f[0x1];
    float RayTracingTranslucencyMaxRoughness; // 0x5a0
    int32_t RayTracingTranslucencyRefractionRays; // 0x5a4
    int32_t RayTracingTranslucencySamplesPerPixel; // 0x5a8
    EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x5ac
    uint8_t RayTracingTranslucencyRefraction : 1; // 0x5ad
    uint8_t pad_bitfield_5ad_1 : 7;
    char pad_5ae[0x2];
    int32_t PathTracingMaxBounces; // 0x5b0
    int32_t PathTracingSamplesPerPixel; // 0x5b4
    float PathTracingFilterWidth; // 0x5b8
    uint8_t PathTracingEnableEmissive : 1; // 0x5bc
    uint8_t pad_bitfield_5bc_1 : 7;
    char pad_5bd[0x3];
    float PathTracingMaxPathExposure; // 0x5c0
    uint8_t PathTracingEnableDenoiser : 1; // 0x5c4
    uint8_t pad_bitfield_5c4_1 : 7;
    char pad_5c5[0x3];
    float LPVFadeRange; // 0x5c8
    float LPVDirectionalOcclusionFadeRange; // 0x5cc
    float SimpleLightDemotionDistance; // 0x5d0
    float SimpleLightSpecularFadeEndMultiplier; // 0x5d4
    float ScreenPercentage; // 0x5d8
    char pad_5dc[0x4];
    FWeightedBlendables WeightedBlendables; // 0x5e0
}; // Size: 0x5f0
#pragma pack(pop)
