#pragma once
#include <cstdint>
#include "EEnvironmentalGlobalsRunMode.hpp"
#pragma pack(push, 1)
struct FEnvironmentalGlobalsScalarRunMode {
    EEnvironmentalGlobalsRunMode Mode; // 0x0
    char pad_1[0x3];
    float GameDefaultValue; // 0x4
    float ProbeDefaultValue; // 0x8
    bool bUseGameDefaultValue; // 0xc
    bool bUseProbeDefaultValue; // 0xd
    char pad_e[0x2];
}; // Size: 0x10
#pragma pack(pop)
