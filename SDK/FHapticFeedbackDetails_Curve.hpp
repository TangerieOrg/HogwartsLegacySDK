#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FHapticFeedbackDetails_Curve {
    FRuntimeFloatCurve Frequency; // 0x0
    FRuntimeFloatCurve Amplitude; // 0x88
}; // Size: 0x110
#pragma pack(pop)
