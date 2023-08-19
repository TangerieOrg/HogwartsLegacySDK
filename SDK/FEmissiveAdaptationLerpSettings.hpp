#pragma once
#include <cstdint>
#include "FExposureExpressionsExtrasLerp.hpp"
#pragma pack(push, 1)
struct FEmissiveAdaptationLerpSettings {
    float BloomTargetEV; // 0x0
    float BloomBaseEV; // 0x4
    float BloomIntensityCorrection; // 0x8
    float BloomOutdoorsDaytimeBoostEV; // 0xc
    float AutoExposureAdaptationBoostEV; // 0x10
    float LuminanceAdaptationBoostEV; // 0x14
    float LuminanceAdaptationClampMinEV; // 0x18
    float LuminanceAdaptationClampMaxEV; // 0x1c
    FExposureExpressionsExtrasLerp Extras; // 0x20
}; // Size: 0x40
#pragma pack(pop)
