#pragma once
#include <cstdint>
#include "EEnvironmentalGlobalsScalarConversion.hpp"
#include "EEnvironmentalGlobalsValue.hpp"
#include "FEnvironmentalGlobalsScalarClamp.hpp"
#include "UEnvironmentalGlobalsScalarVar.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UEnvironmentalGlobalsScalarCurveVar : public UEnvironmentalGlobalsScalarVar {
public:
    UCurveFloat* Curve; // 0x48
    EEnvironmentalGlobalsValue CurveX; // 0x50
    EEnvironmentalGlobalsScalarConversion Conversion; // 0x51
    char pad_52[0x2];
    FEnvironmentalGlobalsScalarClamp ClampMinMax; // 0x54
    static UEnvironmentalGlobalsScalarCurveVar* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
