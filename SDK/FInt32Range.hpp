#pragma once
#include <cstdint>
#include "FInt32RangeBound.hpp"
#pragma pack(push, 1)
struct FInt32Range {
    FInt32RangeBound LowerBound; // 0x0
    FInt32RangeBound UpperBound; // 0x8
}; // Size: 0x10
#pragma pack(pop)
