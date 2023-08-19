#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FWeightedDirectionTarget {
    FVector TargetInWorldSpace; // 0x0
    float weight; // 0xc
}; // Size: 0x10
#pragma pack(pop)
