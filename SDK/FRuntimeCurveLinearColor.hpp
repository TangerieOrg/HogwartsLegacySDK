#pragma once
#include <cstdint>
#include "FRichCurve.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
struct FRuntimeCurveLinearColor {
    FRichCurve ColorCurves[4]; // 0x0
    UCurveLinearColor* ExternalCurve; // 0x200
}; // Size: 0x208
#pragma pack(pop)
