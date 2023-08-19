#pragma once
#include <cstdint>
#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#pragma pack(push, 1)
class UEnvironmentalGlobalsCustomScalarModPower : public UEnvironmentalGlobalsCustomScalarMod {
public:
    float Exponent; // 0x28
    char pad_2c[0x4];
    static UEnvironmentalGlobalsCustomScalarModPower* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
