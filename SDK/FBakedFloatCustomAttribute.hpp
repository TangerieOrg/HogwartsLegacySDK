#pragma once
#include <cstdint>
#include "FSimpleCurve.hpp"
#pragma pack(push, 1)
struct FBakedFloatCustomAttribute {
    FName AttributeName; // 0x0
    FSimpleCurve FloatCurve; // 0x8
}; // Size: 0x90
#pragma pack(pop)
