#pragma once
#include <cstdint>
#include "EObjectFadeDirection.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FObjectFadeParams {
    EObjectFadeDirection Direction; // 0x0
    char pad_1[0x7];
    FRuntimeFloatCurve OpacityCurve; // 0x8
}; // Size: 0x90
#pragma pack(pop)
