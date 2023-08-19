#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FCrackFillerPostProcessSettings {
    FLinearColor CutoffColor; // 0x0
    float CutoffDistance; // 0x10
    float SkyHoleSize; // 0x14
    float SkyHoleHardness; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
