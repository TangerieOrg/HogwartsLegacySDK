#pragma once
#include <cstdint>
#include "FAnimCurveBase.hpp"
#include "FVectorCurve.hpp"
#pragma pack(push, 1)
struct FTransformCurve : public FAnimCurveBase {
    FVectorCurve TranslationCurve; // 0x18
    FVectorCurve RotationCurve; // 0x1b0
    FVectorCurve ScaleCurve; // 0x348
}; // Size: 0x4e0
#pragma pack(pop)
