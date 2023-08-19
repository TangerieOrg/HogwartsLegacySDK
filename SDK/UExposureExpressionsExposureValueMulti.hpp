#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsExposureValueMulti : public UExposureExpressionsExposureValue {
public:
    TArray<UExposureExpressionsExposureValue*> Exposures; // 0x28
    static UExposureExpressionsExposureValueMulti* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
