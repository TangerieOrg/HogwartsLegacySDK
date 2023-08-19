#pragma once
#include <cstdint>
#include "EEnvironmentalGlobalsScalarConversion.hpp"
#include "UEnvironmentalGlobalsScalarVar.hpp"
class UExposureExpressionsExposureValue;
#pragma pack(push, 1)
class UEnvironmentalGlobalsScalarExpression : public UEnvironmentalGlobalsScalarVar {
public:
    UExposureExpressionsExposureValue* Expression; // 0x48
    EEnvironmentalGlobalsScalarConversion Conversion; // 0x50
    char pad_51[0x7];
    static UEnvironmentalGlobalsScalarExpression* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
