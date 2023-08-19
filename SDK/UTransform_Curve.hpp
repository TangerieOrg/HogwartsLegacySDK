#pragma once
#include <cstdint>
#include "FRuntimeCurveVector.hpp"
#include "FTransform.hpp"
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_Curve : public UTransformProvider {
public:
    FRuntimeCurveVector TranslateCurve; // 0x28
    FRuntimeCurveVector RotateCurve; // 0x1b0
    FRuntimeCurveVector ScaleCurve; // 0x338
    FTransform DefaultValue; // 0x4c0
    static UTransform_Curve* StaticClass();
}; // Size: 0x4f0
#pragma pack(pop)
