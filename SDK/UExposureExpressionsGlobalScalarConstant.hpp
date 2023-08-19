#pragma once
#include <cstdint>
#include "FExposureExpressionsScalarConstantName.hpp"
#include "UExposureExpressionsGlobalScalarValueBase.hpp"
#pragma pack(push, 1)
class UExposureExpressionsGlobalScalarConstant : public UExposureExpressionsGlobalScalarValueBase {
public:
    FExposureExpressionsScalarConstantName GlobalConstant; // 0x28
    static UExposureExpressionsGlobalScalarConstant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
