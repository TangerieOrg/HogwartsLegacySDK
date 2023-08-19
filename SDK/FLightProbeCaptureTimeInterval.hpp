#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FLightProbeCaptureTimeInterval {
    FDateTime CaptureDateTime; // 0x0
    float NormalizedStartTime; // 0x8
    float DurationHours; // 0xc
    FRuntimeFloatCurve TimeLerpCurve; // 0x10
    bool bFlipTimeLerpCurveT; // 0x98
    char pad_99[0x7];
}; // Size: 0xa0
#pragma pack(pop)
