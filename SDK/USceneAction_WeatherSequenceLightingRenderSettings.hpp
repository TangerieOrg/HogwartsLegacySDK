#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "FRenderSettingsPostProcessing.hpp"
#include "USceneAction_WeatherSequenceLightingPostProcessingBase.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceLightingRenderSettings : public USceneAction_WeatherSequenceLightingPostProcessingBase {
public:
    FRenderSettingsPostProcessing Settings; // 0x90
    float ExposureTweak; // 0xec
    FBlendDomain BlendDomain; // 0xf0
    float Priority; // 0x128
    bool bEnabled; // 0x12c
    bool bUseExposureTweak; // 0x12d
    char pad_12e[0x2];
    static USceneAction_WeatherSequenceLightingRenderSettings* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
