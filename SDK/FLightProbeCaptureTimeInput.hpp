#pragma once
#include <cstdint>
#include "FTimeInput.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FLightProbeCaptureTimeInput {
    FTimeInput Time; // 0x0
    char pad_c[0x4];
    UCurveFloat* LerpCurve; // 0x10
    bool bFlipLerpCurveT; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
