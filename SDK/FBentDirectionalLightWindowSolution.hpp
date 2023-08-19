#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FBentDirectionalLightWindowSolution {
    FVector SunDirection; // 0x0
    float DeltaCos; // 0xc
    bool bValid; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
