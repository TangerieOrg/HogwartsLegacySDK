#pragma once
#include <cstdint>
#include "UPostProcessingVarsDriver.hpp"
#pragma pack(push, 1)
class UPostProcessingVarsDriverConst : public UPostProcessingVarsDriver {
public:
    float Value; // 0x28
    char pad_2c[0x4];
    static UPostProcessingVarsDriverConst* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
