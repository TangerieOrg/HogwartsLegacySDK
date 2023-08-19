#pragma once
#include <cstdint>
#include "EEnvironmentalGlobalsRunMode.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FEnvironmentalGlobalsColorRunMode {
    EEnvironmentalGlobalsRunMode Mode; // 0x0
    char pad_1[0x3];
    FLinearColor GameDefaultValue; // 0x4
    FLinearColor ProbeDefaultValue; // 0x14
    bool bUseGameDefaultValue; // 0x24
    bool bUseProbeDefaultValue; // 0x25
    char pad_26[0x2];
}; // Size: 0x28
#pragma pack(pop)
