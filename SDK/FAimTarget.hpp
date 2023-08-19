#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAimTarget {
    float weight; // 0x0
    char pad_4[0xc];
    FTransform Transform; // 0x10
    FVector AlignVector; // 0x40
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
