#pragma once
#include <cstdint>
#include "EEnvironmentalGlobalsValue.hpp"
#include "UExposureExpressionsExposureValue.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UEnvironmentalGlobalsExpsoureCurveFromGlobals : public UExposureExpressionsExposureValue {
public:
    UCurveFloat* Curve; // 0x28
    EEnvironmentalGlobalsValue CurveX; // 0x30
    char pad_31[0x7];
    static UEnvironmentalGlobalsExpsoureCurveFromGlobals* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
