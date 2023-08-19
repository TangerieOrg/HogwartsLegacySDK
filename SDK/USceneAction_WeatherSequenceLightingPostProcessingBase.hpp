#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequenceLightingBase.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceLightingPostProcessingBase : public USceneAction_WeatherSequenceLightingBase {
public:
    float PostSequenceLifetime; // 0x88
    char pad_8c[0x4];
    static USceneAction_WeatherSequenceLightingPostProcessingBase* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
