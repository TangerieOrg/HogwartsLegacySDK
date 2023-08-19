#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FPlane : public FVector {
    float W; // 0xc
}; // Size: 0x10
#pragma pack(pop)
