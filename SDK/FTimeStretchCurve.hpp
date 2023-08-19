#pragma once
#include <cstdint>
#include "FTimeStretchCurveMarker.hpp"
#pragma pack(push, 1)
struct FTimeStretchCurve {
    float SamplingRate; // 0x0
    float CurveValueMinPrecision; // 0x4
    TArray<FTimeStretchCurveMarker> Markers; // 0x8
    float Sum_dT_i_by_C_i[3]; // 0x18
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
