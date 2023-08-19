#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FProbeLightingToneMapParameters {
    float ProbeToneMapAmount; // 0x0
    float ProbeToneMapMinIntensity; // 0x4
    float ProbeToneMapMaxEV; // 0x8
}; // Size: 0xc
#pragma pack(pop)
