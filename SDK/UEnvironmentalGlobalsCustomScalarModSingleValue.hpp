#pragma once
#include <cstdint>
#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
class UEnvironmentalGlobalsCustomScalarBase;
#pragma pack(push, 1)
class UEnvironmentalGlobalsCustomScalarModSingleValue : public UEnvironmentalGlobalsCustomScalarMod {
public:
    UEnvironmentalGlobalsCustomScalarBase* Value; // 0x28
    static UEnvironmentalGlobalsCustomScalarModSingleValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
