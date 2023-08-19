#pragma once
#include <cstdint>
#include "EEnvironmentalGlobalsColorCurveVarMode.hpp"
#include "EEnvironmentalGlobalsColorVarConversion.hpp"
#include "EEnvironmentalGlobalsValue.hpp"
#include "UEnvironmentalGlobalsColorVar.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
class UEnvironmentalGlobalsColorCurveVar : public UEnvironmentalGlobalsColorVar {
public:
    UCurveLinearColor* Curve; // 0x60
    EEnvironmentalGlobalsValue CurveX; // 0x68
    EEnvironmentalGlobalsColorVarConversion Conversion; // 0x69
    EEnvironmentalGlobalsColorCurveVarMode Mode; // 0x6a
    char pad_6b[0x5];
    static UEnvironmentalGlobalsColorCurveVar* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
