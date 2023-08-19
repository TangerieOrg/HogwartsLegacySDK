#pragma once
#include <cstdint>
#include "FRichCurve.hpp"
class UCurveVector;
#pragma pack(push, 1)
struct FRuntimeCurveVector {
    FRichCurve VectorCurves[3]; // 0x0
    UCurveVector* ExternalCurve; // 0x180
}; // Size: 0x188
#pragma pack(pop)
