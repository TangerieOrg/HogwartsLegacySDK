#pragma once
#include <cstdint>
#include "ELumosContactShadows.hpp"
#include "ULumosScalabilityModifyWithRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilityModifyContactShadows : public ULumosScalabilityModifyWithRule {
public:
    ELumosContactShadows ContactShadows; // 0x40
    char pad_41[0x3];
    float ContactShadowLength; // 0x44
    bool bOnlyIfContactShadowsEnabled; // 0x48
    char pad_49[0x7];
    static ULumosScalabilityModifyContactShadows* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
