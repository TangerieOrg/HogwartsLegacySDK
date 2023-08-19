#pragma once
#include <cstdint>
#include "UEnvironmentalGlobalsCustomScalarBase.hpp"
class UEnvironmentalGlobalsCustomScalarMod;
#pragma pack(push, 1)
class UEnvironmentalGlobalsCustomScalarModsBase : public UEnvironmentalGlobalsCustomScalarBase {
public:
    TArray<UEnvironmentalGlobalsCustomScalarMod*> Mods; // 0x28
    static UEnvironmentalGlobalsCustomScalarModsBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
