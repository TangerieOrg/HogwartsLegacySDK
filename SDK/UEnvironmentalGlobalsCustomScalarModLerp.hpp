#pragma once
#include <cstdint>
#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#pragma pack(push, 1)
class UEnvironmentalGlobalsCustomScalarModLerp : public UEnvironmentalGlobalsCustomScalarMod {
public:
    float ValueAtZero; // 0x28
    float ValueAtOne; // 0x2c
    static UEnvironmentalGlobalsCustomScalarModLerp* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
