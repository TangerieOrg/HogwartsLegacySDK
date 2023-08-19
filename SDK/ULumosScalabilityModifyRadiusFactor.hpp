#pragma once
#include <cstdint>
#include "ULumosScalabilityModifyWithRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilityModifyRadiusFactor : public ULumosScalabilityModifyWithRule {
public:
    float LightRadiusFactor; // 0x40
    char pad_44[0x4];
    static ULumosScalabilityModifyRadiusFactor* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
