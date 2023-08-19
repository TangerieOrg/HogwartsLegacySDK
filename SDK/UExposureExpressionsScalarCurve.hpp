#pragma once
#include <cstdint>
#include "UExposureExpressionsScalarValue.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UExposureExpressionsScalarCurve : public UExposureExpressionsScalarValue {
public:
    UCurveFloat* Curve; // 0x28
    UExposureExpressionsScalarValue* CurveX; // 0x30
    static UExposureExpressionsScalarCurve* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
