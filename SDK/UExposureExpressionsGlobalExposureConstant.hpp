#pragma once
#include <cstdint>
#include "FExposureExpressionsExposureConstantName.hpp"
#include "UExposureExpressionsGlobalExposureValueBase.hpp"
#pragma pack(push, 1)
class UExposureExpressionsGlobalExposureConstant : public UExposureExpressionsGlobalExposureValueBase {
public:
    FExposureExpressionsExposureConstantName GlobalConstant; // 0x28
    static UExposureExpressionsGlobalExposureConstant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
