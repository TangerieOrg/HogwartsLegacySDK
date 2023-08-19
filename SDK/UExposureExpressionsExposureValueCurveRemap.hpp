#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValue.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UExposureExpressionsExposureValueCurveRemap : public UExposureExpressionsExposureValue {
public:
    UCurveFloat* Curve; // 0x28
    UExposureExpressionsExposureValue* Value; // 0x30
    static UExposureExpressionsExposureValueCurveRemap* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
