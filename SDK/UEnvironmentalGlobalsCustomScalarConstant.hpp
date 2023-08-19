#pragma once
#include <cstdint>
#include "UEnvironmentalGlobalsCustomScalarBase.hpp"
#pragma pack(push, 1)
class UEnvironmentalGlobalsCustomScalarConstant : public UEnvironmentalGlobalsCustomScalarBase {
public:
    float Value; // 0x28
    char pad_2c[0x4];
    static UEnvironmentalGlobalsCustomScalarConstant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
