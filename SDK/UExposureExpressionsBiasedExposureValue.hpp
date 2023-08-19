#pragma once
#include <cstdint>
#include "UExposureExpressionsExposureValueSingle.hpp"
#pragma pack(push, 1)
class UExposureExpressionsBiasedExposureValue : public UExposureExpressionsExposureValueSingle {
public:
    bool bAutoExposureBiasBase; // 0x30
    bool bAutoExposureBiasVFX; // 0x31
    bool bAutoExposureBiasCurve; // 0x32
    char pad_33[0x5];
    static UExposureExpressionsBiasedExposureValue* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
