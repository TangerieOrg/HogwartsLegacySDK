#pragma once
#include <cstdint>
#include "FColorGradePerRangeSettings.hpp"
#pragma pack(push, 1)
struct FColorGradingSettings {
    FColorGradePerRangeSettings Global; // 0x0
    FColorGradePerRangeSettings Shadows; // 0x50
    FColorGradePerRangeSettings Midtones; // 0xa0
    FColorGradePerRangeSettings Highlights; // 0xf0
    float ShadowsMax; // 0x140
    float HighlightsMin; // 0x144
    char pad_148[0x8];
}; // Size: 0x150
#pragma pack(pop)
