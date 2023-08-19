#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAxis {
    FVector Axis; // 0x0
    bool bInLocalSpace; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
