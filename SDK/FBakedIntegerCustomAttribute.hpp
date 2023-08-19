#pragma once
#include <cstdint>
#include "FIntegralCurve.hpp"
#pragma pack(push, 1)
struct FBakedIntegerCustomAttribute {
    FName AttributeName; // 0x0
    FIntegralCurve IntCurve; // 0x8
}; // Size: 0x88
#pragma pack(pop)
