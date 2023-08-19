#pragma once
#include <cstdint>
#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UEnvironmentalGlobalsCustomScalarModCurve : public UEnvironmentalGlobalsCustomScalarMod {
public:
    UCurveFloat* Curve; // 0x28
    static UEnvironmentalGlobalsCustomScalarModCurve* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
