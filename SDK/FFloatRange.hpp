#pragma once
#include <cstdint>
#include "FFloatRangeBound.hpp"
#pragma pack(push, 1)
struct FFloatRange {
    FFloatRangeBound LowerBound; // 0x0
    FFloatRangeBound UpperBound; // 0x8
}; // Size: 0x10
#pragma pack(pop)
