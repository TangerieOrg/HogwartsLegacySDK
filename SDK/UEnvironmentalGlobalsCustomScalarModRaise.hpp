#pragma once
#include <cstdint>
#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#pragma pack(push, 1)
class UEnvironmentalGlobalsCustomScalarModRaise : public UEnvironmentalGlobalsCustomScalarMod {
public:
    float Base; // 0x28
    char pad_2c[0x4];
    static UEnvironmentalGlobalsCustomScalarModRaise* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
