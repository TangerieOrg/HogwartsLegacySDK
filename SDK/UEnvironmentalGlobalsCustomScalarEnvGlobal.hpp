#pragma once
#include <cstdint>
#include "EEnvironmentalGlobalsValue.hpp"
#include "UEnvironmentalGlobalsCustomScalarModsBase.hpp"
#pragma pack(push, 1)
class UEnvironmentalGlobalsCustomScalarEnvGlobal : public UEnvironmentalGlobalsCustomScalarModsBase {
public:
    EEnvironmentalGlobalsValue Value; // 0x38
    char pad_39[0x7];
    static UEnvironmentalGlobalsCustomScalarEnvGlobal* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
