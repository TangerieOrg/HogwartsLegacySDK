#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#pragma pack(push, 1)
class UEnvironmentalGlobalsCustomScalarModRemap : public UEnvironmentalGlobalsCustomScalarMod {
public:
    FVector2D InputMinMax; // 0x28
    FVector2D OutputMinMax; // 0x30
    static UEnvironmentalGlobalsCustomScalarModRemap* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
