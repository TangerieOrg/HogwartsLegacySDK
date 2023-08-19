#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNamedBoneInfluences {
    float Weights[12]; // 0x0
    FName Names[12]; // 0x30
}; // Size: 0x90
#pragma pack(pop)
