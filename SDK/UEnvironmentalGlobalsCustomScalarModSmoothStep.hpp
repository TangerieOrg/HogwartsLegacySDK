#pragma once
#include <cstdint>
#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#pragma pack(push, 1)
class UEnvironmentalGlobalsCustomScalarModSmoothStep : public UEnvironmentalGlobalsCustomScalarMod {
public:
    float Min; // 0x28
    float Max; // 0x2c
    static UEnvironmentalGlobalsCustomScalarModSmoothStep* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
