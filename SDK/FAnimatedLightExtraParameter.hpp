#pragma once
#include <cstdint>
#include "EAnimatedLightExtraParameterValue.hpp"
#include "ELightUnits.hpp"
#pragma pack(push, 1)
struct FAnimatedLightExtraParameter {
    FName Parameter; // 0x0
    float ToleranceThreshold; // 0x8
    EAnimatedLightExtraParameterValue Value; // 0xc
    ELightUnits OutputIntensityUnits; // 0xd
    uint8_t bOnlyUpdateOnce : 1; // 0xe
    uint8_t bUseOutputIntensityUnits : 1; // 0xe
    uint8_t pad_bitfield_e_2 : 6;
    char pad_f[0x1];
}; // Size: 0x10
#pragma pack(pop)
