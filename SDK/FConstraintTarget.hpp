#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "FTransformFilter.hpp"
#pragma pack(push, 1)
struct FConstraintTarget {
    FTransform Transform; // 0x0
    float weight; // 0x30
    bool bMaintainOffset; // 0x34
    FTransformFilter Filter; // 0x35
    char pad_3e[0x2];
}; // Size: 0x40
#pragma pack(pop)
