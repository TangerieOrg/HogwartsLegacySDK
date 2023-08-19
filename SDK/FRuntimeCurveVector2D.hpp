#pragma once
#include <cstdint>
#include "FRichCurve.hpp"
class UCurveVector2D;
#pragma pack(push, 1)
struct FRuntimeCurveVector2D {
    FRichCurve VectorCurves[2]; // 0x0
    UCurveVector2D* ExternalCurve; // 0x100
}; // Size: 0x108
#pragma pack(pop)
