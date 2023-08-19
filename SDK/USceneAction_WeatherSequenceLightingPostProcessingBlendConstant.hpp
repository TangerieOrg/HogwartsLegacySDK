#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequenceLightingPostProcessing.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceLightingPostProcessingBlendConstant : public USceneAction_WeatherSequenceLightingPostProcessing {
public:
    float BlendWeight; // 0x6c0
    char pad_6c4[0xc];
    static USceneAction_WeatherSequenceLightingPostProcessingBlendConstant* StaticClass();
}; // Size: 0x6d0
#pragma pack(pop)
