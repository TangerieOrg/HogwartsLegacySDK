#pragma once
#include <cstdint>
#include "FFrameNumberRangeBound.hpp"
#pragma pack(push, 1)
struct FFrameNumberRange {
    FFrameNumberRangeBound LowerBound; // 0x0
    FFrameNumberRangeBound UpperBound; // 0x8
}; // Size: 0x10
#pragma pack(pop)
