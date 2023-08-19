#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsExposureValuePair : public UExposureExpressionsExposureValue {
public:
    UExposureExpressionsExposureValue* ExposureA; // 0x28
    UExposureExpressionsExposureValue* ExposureB; // 0x30
    static UExposureExpressionsExposureValuePair* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
