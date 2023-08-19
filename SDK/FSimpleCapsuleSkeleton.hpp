#pragma once
#include <cstdint>
#include "FCapsuleBoundingSphere.hpp"
#pragma pack(push, 1)
struct FSimpleCapsuleSkeleton {
    char pad_0[0x58];
    TArray<FName> BoneKeys; // 0x58
    FCapsuleBoundingSphere Bounds; // 0x68
    char pad_7c[0x4];
}; // Size: 0x80
#pragma pack(pop)
