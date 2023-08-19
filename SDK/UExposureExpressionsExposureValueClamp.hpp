#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsExposureValueClamp : public UExposureExpressionsExposureValue {
public:
    UExposureExpressionsExposureValue* Value; // 0x28
    UExposureExpressionsExposureValue* ExposureMin; // 0x30
    UExposureExpressionsExposureValue* ExposureMax; // 0x38
    static UExposureExpressionsExposureValueClamp* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
