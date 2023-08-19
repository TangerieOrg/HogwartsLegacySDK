#pragma once
#include <cstdint>
#include "EMoonPhaseName.hpp"
#pragma pack(push, 1)
struct FManualMoonSetup {
    EMoonPhaseName Phase; // 0x0
    char pad_1[0x3];
    float PhasePercent; // 0x4
    float LightingAngle; // 0x8
    float SizeFactorPercent; // 0xc
    float BloodPercent; // 0x10
    bool bOverride_Phase; // 0x14
    bool bOverride_SizeFactor; // 0x15
    bool bOverride_Blood; // 0x16
    char pad_17[0x1];
}; // Size: 0x18
#pragma pack(pop)
