#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FProbeLightingToneMapParametersOverride {
    uint8_t bOverride_ProbeToneMapAmount : 1; // 0x0
    uint8_t bOverride_ProbeToneMapMinIntensity : 1; // 0x0
    uint8_t bOverride_ProbeToneMapMaxEV : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
    char pad_1[0x3];
    float ProbeToneMapAmount; // 0x4
    float ProbeToneMapMinIntensity; // 0x8
    float ProbeToneMapMaxEV; // 0xc
}; // Size: 0x10
#pragma pack(pop)
