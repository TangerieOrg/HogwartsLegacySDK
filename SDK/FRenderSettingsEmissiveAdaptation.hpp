#pragma once
#include <cstdint>
#include "FExposureExpressionsExtras.hpp"
class UExposureExpressionsExposureValue;
#pragma pack(push, 1)
struct FRenderSettingsEmissiveAdaptation {
    uint8_t bOverride_BloomTarget : 1; // 0x0
    uint8_t bOverride_BloomBaseEV : 1; // 0x0
    uint8_t bOverride_BloomIntensityCorrection : 1; // 0x0
    uint8_t bOverride_BloomOutdoorsDaytimeBoostEV : 1; // 0x0
    uint8_t bOverride_AutoExposureAdaptationBoostEV : 1; // 0x0
    uint8_t bOverride_LuminanceAdaptationBoostEV : 1; // 0x0
    uint8_t bOverride_LuminanceAdaptationMinEV : 1; // 0x0
    uint8_t bOverride_LuminanceAdaptationMaxEV : 1; // 0x0
    char pad_1[0x3];
    FName Name; // 0x4
    char pad_c[0x4];
    UExposureExpressionsExposureValue* BloomTargetExpression; // 0x10
    UExposureExpressionsExposureValue* BloomBaseExpression; // 0x18
    float BloomIntensityCorrection; // 0x20
    char pad_24[0x4];
    UExposureExpressionsExposureValue* BloomOutdoorsDaytimeBoostExpression; // 0x28
    UExposureExpressionsExposureValue* AutoExposureAdaptationBoostExpression; // 0x30
    UExposureExpressionsExposureValue* LuminanceAdaptationBoostExpression; // 0x38
    UExposureExpressionsExposureValue* LuminanceAdaptationMinExpression; // 0x40
    UExposureExpressionsExposureValue* LuminanceAdaptationMaxExpression; // 0x48
    FExposureExpressionsExtras Extras; // 0x50
}; // Size: 0x90
#pragma pack(pop)
