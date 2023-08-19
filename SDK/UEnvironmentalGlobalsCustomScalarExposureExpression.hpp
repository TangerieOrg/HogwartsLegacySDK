#pragma once
#include <cstdint>
#include "UEnvironmentalGlobalsCustomScalarModsBase.hpp"
class UExposureExpressionsScalarValue;
#pragma pack(push, 1)
class UEnvironmentalGlobalsCustomScalarExposureExpression : public UEnvironmentalGlobalsCustomScalarModsBase {
public:
    UExposureExpressionsScalarValue* Expression; // 0x38
    static UEnvironmentalGlobalsCustomScalarExposureExpression* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
