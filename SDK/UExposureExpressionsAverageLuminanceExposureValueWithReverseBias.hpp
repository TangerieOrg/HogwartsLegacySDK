#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsAverageLuminanceExposureValueWithReverseBias : public UExposureExpressionsExposureValue {
public:
    bool bSmoothed; // 0x28
    bool bUseHistory; // 0x29
    char pad_2a[0x6];
    static UExposureExpressionsAverageLuminanceExposureValueWithReverseBias* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
