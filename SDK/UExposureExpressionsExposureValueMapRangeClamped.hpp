#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsExposureValueMapRangeClamped : public UExposureExpressionsExposureValue {
public:
    UExposureExpressionsExposureValue* Value; // 0x28
    UExposureExpressionsExposureValue* InExposureMin; // 0x30
    UExposureExpressionsExposureValue* InExposureMax; // 0x38
    UExposureExpressionsExposureValue* OutExposureMin; // 0x40
    UExposureExpressionsExposureValue* OutExposureMax; // 0x48
    static UExposureExpressionsExposureValueMapRangeClamped* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
