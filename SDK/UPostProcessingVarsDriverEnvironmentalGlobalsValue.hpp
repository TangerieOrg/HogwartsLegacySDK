#pragma once
#include <cstdint>
#include "EEnvironmentalGlobalsValue.hpp"
#include "UPostProcessingVarsDriver.hpp"
#pragma pack(push, 1)
class UPostProcessingVarsDriverEnvironmentalGlobalsValue : public UPostProcessingVarsDriver {
public:
    EEnvironmentalGlobalsValue EnvironmentalGlobal; // 0x28
    char pad_29[0x7];
    static UPostProcessingVarsDriverEnvironmentalGlobalsValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
