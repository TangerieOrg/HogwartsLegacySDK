#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsAverageLuminanceExposureValue : public UExposureExpressionsExposureValue {
public:
    bool bSmoothed; // 0x28
    bool bUnbiased; // 0x29
    bool bUseHistory; // 0x2a
    char pad_2b[0x5];
    static UExposureExpressionsAverageLuminanceExposureValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
