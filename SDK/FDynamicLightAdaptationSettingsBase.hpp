#pragma once
#include <cstdint>
#include "ELightAdapatationMode.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FDynamicLightAdaptationSettingsBase {
    char pad_0[0x8];
    float BaseEV; // 0x8
    float OutdoorsDayTimeEVBoost; // 0xc
    float AdaptationStrengthPercent; // 0x10
    float MinMaxExposureTarget; // 0x14
    float MaxEV; // 0x18
    float MinEV; // 0x1c
    float StartCutoffMaxEV; // 0x20
    float StartCutoffMinEV; // 0x24
    float AutoExposureUpdateTolerance; // 0x28
    int32_t FreezeAdaptationAfterFrames; // 0x2c
    ELightAdapatationMode Mode; // 0x30
    bool bUseExposureBias; // 0x31
    bool bFiltered; // 0x32
    char pad_33[0x5];
    UCurveFloat* ExposureCompensationCurve; // 0x38
    bool bApplyCompensation; // 0x40
    char pad_41[0x7];
}; // Size: 0x48
#pragma pack(pop)
