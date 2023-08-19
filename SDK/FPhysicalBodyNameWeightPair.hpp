#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPhysicalBodyNameWeightPair {
    FName BoneName; // 0x0
    float BoneWeight; // 0x8
}; // Size: 0xc
#pragma pack(pop)
