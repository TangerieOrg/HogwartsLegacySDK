#pragma once
#include <cstdint>
#include "FPostProcessSettings.hpp"
#include "USceneActionState_WeatherSequenceLightingBase.hpp"
#pragma pack(push, 1)
class USceneActionState_WeatherSequenceLightingPostProcessing : public USceneActionState_WeatherSequenceLightingBase {
public:
    char pad_58[0x8];
    FPostProcessSettings CachedPostProcessSettings; // 0x60
    static USceneActionState_WeatherSequenceLightingPostProcessing* StaticClass();
}; // Size: 0x650
#pragma pack(pop)
