#pragma once
#include <cstdint>
#include "FLightCullingLevelName.hpp"
class ULightCullingSettings;
#pragma pack(push, 1)
struct FLightCullingPerLevelSettings {
    FLightCullingLevelName Level; // 0x0
    FString LevelPartialMatch; // 0x8
    ULightCullingSettings* Settings; // 0x18
    bool bUseSubString; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
