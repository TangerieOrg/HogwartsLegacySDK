#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsExposureValueSingle : public UExposureExpressionsExposureValue {
public:
    UExposureExpressionsExposureValue* Value; // 0x28
    static UExposureExpressionsExposureValueSingle* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
