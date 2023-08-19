#pragma once
#include <cstdint>
#include "FTimeInput.hpp"
#pragma pack(push, 1)
struct FDirLightPseudoFadeTimeInterval {
    FTimeInput StartTime; // 0x0
    FTimeInput EndTime; // 0xc
    float FadeTimeHours; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
