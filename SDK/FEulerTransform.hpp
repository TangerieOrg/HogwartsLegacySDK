#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FEulerTransform {
    FVector Location; // 0x0
    FRotator Rotation; // 0xc
    FVector Scale; // 0x18
}; // Size: 0x24
#pragma pack(pop)
