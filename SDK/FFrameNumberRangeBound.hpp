#pragma once
#include <cstdint>
#include "ERangeBoundTypes\Type.hpp"
#include "FFrameNumber.hpp"
#pragma pack(push, 1)
struct FFrameNumberRangeBound {
    ERangeBoundTypes::Type Type; // 0x0
    char pad_1[0x3];
    FFrameNumber Value; // 0x4
}; // Size: 0x8
#pragma pack(pop)
