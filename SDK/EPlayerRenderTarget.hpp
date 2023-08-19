#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPlayerRenderTarget {
    PRT_Ripple = 0,
    PRT_WaveDisplacements = 1,
    PRT_WaveFoam = 2,
    PRT_Count = 3,
    PRT_MAX = 4,
};
#pragma pack(pop)
