#pragma once
#include <cstdint>
#include "FAnimCurveBase.hpp"
#include "FRichCurve.hpp"
#pragma pack(push, 1)
struct FVectorCurve : public FAnimCurveBase {
    FRichCurve FloatCurves[3]; // 0x18
}; // Size: 0x198
#pragma pack(pop)
