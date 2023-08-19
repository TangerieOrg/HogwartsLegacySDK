#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValue.hpp"
class UCurveFloat;
class UExposureExpressionsScalarValue;
#pragma pack(push, 1)
class UExposureExpressionsExposureCurve : public UExposureExpressionsExposureValue {
public:
    UCurveFloat* ExposureCurve; // 0x28
    UExposureExpressionsScalarValue* CurveX; // 0x30
    static UExposureExpressionsExposureCurve* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
