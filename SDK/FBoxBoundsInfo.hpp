#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FBoxBoundsInfo {
    FVector Center; // 0x0
    FVector Extent; // 0xc
    float Radius; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
