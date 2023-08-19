#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FTwoVectors {
    FVector v1; // 0x0
    FVector v2; // 0xc
}; // Size: 0x18
#pragma pack(pop)
