#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "FPostProcessSettings.hpp"
#include "USceneAction_WeatherSequenceLightingPostProcessingBase.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceLightingPostProcessing : public USceneAction_WeatherSequenceLightingPostProcessingBase {
public:
    FPostProcessSettings PostProcessSettings; // 0x90
    FBlendDomain BlendDomain; // 0x680
    float Priority; // 0x6b8
    bool bEnabled; // 0x6bc
    char pad_6bd[0x3];
    static USceneAction_WeatherSequenceLightingPostProcessing* StaticClass();
}; // Size: 0x6c0
#pragma pack(pop)
