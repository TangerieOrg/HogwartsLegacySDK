#pragma once
#include <cstdint>
#include "FCharacterLightingFeaturesSettings.hpp"
#pragma pack(push, 1)
struct FCharacterLightingFeaturesSettingsOverride {
    char pad_0[0x8];
    FCharacterLightingFeaturesSettings Settings; // 0x8
    float Lerp; // 0x48
}; // Size: 0x4c
#pragma pack(pop)
