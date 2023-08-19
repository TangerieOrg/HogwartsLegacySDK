#pragma once
#include <cstdint>
#include "ECRSimPointForceType.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCRSimPointForce {
    ECRSimPointForceType ForceType; // 0x0
    char pad_1[0x3];
    FVector Vector; // 0x4
    float Coefficient; // 0x10
    bool bNormalize; // 0x14
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
