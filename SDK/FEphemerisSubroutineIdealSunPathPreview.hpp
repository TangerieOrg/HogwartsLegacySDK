#pragma once
#include <cstdint>
#include "FEphemerisDayInfo.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FEphemerisSubroutineIdealSunPathPreview {
    FEphemerisDayInfo DayInfo; // 0x0
    FRuntimeFloatCurve AzimuthCurve; // 0x78
    FRuntimeFloatCurve AltitudeCurve; // 0x100
}; // Size: 0x188
#pragma pack(pop)
