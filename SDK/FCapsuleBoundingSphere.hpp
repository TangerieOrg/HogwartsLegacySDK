#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCapsuleBoundingSphere {
    FVector Center; // 0x0
    float Radius; // 0xc
    bool bValid; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
