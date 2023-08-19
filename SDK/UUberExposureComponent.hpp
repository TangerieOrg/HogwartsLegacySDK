#pragma once
#include <cstdint>
#include "EAutoExposureMethod.hpp"
#include "FUberExposureColorGradingGlobal.hpp"
#include "FUberExposureColorGradingHighlights.hpp"
#include "FUberExposureColorGradingMidtones.hpp"
#include "FUberExposureColorGradingShadows.hpp"
#include "UPostProcessingVarsComponent.hpp"
class UTexture;
class UCurveFloat;
class UCurveLinearColor;
#pragma pack(push, 1)
class UUberExposureComponent : public UPostProcessingVarsComponent {
public:
    EAutoExposureMethod ExposureMethod; // 0x880
    char pad_881[0x7];
    UTexture* AutoExposureMeterMask; // 0x888
    UCurveFloat* ExposureCompensationCurve; // 0x890
    UCurveFloat* BaseExposureCompensationCurve; // 0x898
    float BaseExposureCompensationValue; // 0x8a0
    char pad_8a4[0x4];
    UCurveFloat* MinExposureCurve; // 0x8a8
    UCurveFloat* MaxExposureCurve; // 0x8b0
    UCurveFloat* SpeedUpCurve; // 0x8b8
    UCurveFloat* SpeedDownCurve; // 0x8c0
    UCurveFloat* LowPercentCurve; // 0x8c8
    UCurveFloat* HighPercentCurve; // 0x8d0
    UCurveFloat* HistogramMinCurve; // 0x8d8
    UCurveFloat* HistogramMaxCurve; // 0x8e0
    UCurveFloat* ExposureBiasCurve; // 0x8e8
    UCurveFloat* WhiteBalanceTempCurve; // 0x8f0
    UCurveFloat* WhiteBalanceTintCurve; // 0x8f8
    FUberExposureColorGradingGlobal Global; // 0x900
    FUberExposureColorGradingShadows Shadows; // 0x930
    FUberExposureColorGradingMidtones Midtones; // 0x970
    FUberExposureColorGradingHighlights Highlights; // 0x9a0
    UCurveFloat* BlueCorrectionCurve; // 0x9e0
    UCurveFloat* ExpandGamutCurve; // 0x9e8
    UCurveLinearColor* SceneColorTintCurve; // 0x9f0
    UCurveFloat* ProbeToneMapAmountCurve; // 0x9f8
    UCurveFloat* ProbeToneMapMinIntensityCurve; // 0xa00
    UCurveFloat* ProbeToneMapMaxEVCurve; // 0xa08
    UCurveFloat* ProbeOutsideIntensityCurve; // 0xa10
    UCurveFloat* ProbeInsideIntensityCurve; // 0xa18
    UCurveFloat* ProbeOutsideSaturationCurve; // 0xa20
    UCurveFloat* ProbeInsideSaturationCurve; // 0xa28
    UCurveFloat* ProbeContactShadowsMinValueCurve; // 0xa30
    UCurveFloat* ProbeContactShadowsLengthCurve; // 0xa38
    UCurveFloat* ProbeContactShadowsConeAngleCurve; // 0xa40
    UCurveFloat* ProbeContactShadowsFalloffExponentCurve; // 0xa48
    UCurveFloat* ProbeContactShadowsDepthToleranceCurve; // 0xa50
    uint8_t bSetExposureMethod : 1; // 0xa58
    uint8_t bUseExposureCompensationCurve : 1; // 0xa58
    uint8_t bUseMinExposureCurve : 1; // 0xa58
    uint8_t bUseMaxExposureCurve : 1; // 0xa58
    uint8_t bUseSpeedUpCurve : 1; // 0xa58
    uint8_t bUseSpeedDownCurve : 1; // 0xa58
    uint8_t bUseLowPercentCurve : 1; // 0xa58
    uint8_t bUseHighPercentCurve : 1; // 0xa58
    uint8_t bUseHistogramMinCurve : 1; // 0xa59
    uint8_t bUseHistogramMaxCurve : 1; // 0xa59
    uint8_t bSetExposureBiasCurve : 1; // 0xa59
    uint8_t bUseWhiteBalanceTempCurve : 1; // 0xa59
    uint8_t bUseWhiteBalanceTintCurve : 1; // 0xa59
    uint8_t bUseBlueCorrectionCurve : 1; // 0xa59
    uint8_t bUseExpandGamutCurve : 1; // 0xa59
    uint8_t bUseColorGradingShadows : 1; // 0xa59
    uint8_t bUseColorGradingMidtones : 1; // 0xa5a
    uint8_t bUseColorGradingHighlights : 1; // 0xa5a
    uint8_t bUseProbeToneMapAmount : 1; // 0xa5a
    uint8_t bUseProbeToneMapMinIntensity : 1; // 0xa5a
    uint8_t bUseProbeToneMapMaxEV : 1; // 0xa5a
    uint8_t bUseProbeOutsideIntensity : 1; // 0xa5a
    uint8_t bUseProbeInsideIntensity : 1; // 0xa5a
    uint8_t bUseProbeOutsideSaturation : 1; // 0xa5a
    uint8_t bUseProbeInsideSaturation : 1; // 0xa5b
    uint8_t bUseProbeContactShadowsMinValue : 1; // 0xa5b
    uint8_t bUseProbeContactShadowsLength : 1; // 0xa5b
    uint8_t bUseProbeContactShadowsConeAngle : 1; // 0xa5b
    uint8_t bUseProbeContactShadowsFalloffExponent : 1; // 0xa5b
    uint8_t bUseProbeContactShadowsDepthTolerance : 1; // 0xa5b
    uint8_t bUseAutoExposureMeterMask : 1; // 0xa5b
    uint8_t bUseColorGradingGlobal : 1; // 0xa5b
    uint8_t bUseSceneColorTintCurve : 1; // 0xa5c
    uint8_t pad_bitfield_a5c_1 : 7;
    char pad_a5d[0x3];
    static UUberExposureComponent* StaticClass();
}; // Size: 0xa60
#pragma pack(pop)
