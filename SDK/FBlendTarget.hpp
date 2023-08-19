#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FBlendTarget {
    FTransform Transform; // 0x0
    float weight; // 0x30
    char pad_34[0xc];
}; // Size: 0x40
#pragma pack(pop)
