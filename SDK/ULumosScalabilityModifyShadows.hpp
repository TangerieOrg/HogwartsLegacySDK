#pragma once
#include <cstdint>
#include "ELumosContactShadows.hpp"
#include "ULumosScalabilityModifyWithRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilityModifyShadows : public ULumosScalabilityModifyWithRule {
public:
    bool bProjectDynamicShadows; // 0x40
    bool bCastVolumetricShadow; // 0x41
    bool bCastTranslucentShadows; // 0x42
    ELumosContactShadows ContactShadows; // 0x43
    float ContactShadowLength; // 0x44
    bool bOverride_bProjectDynamicShadows; // 0x48
    bool bOverride_bCastVolumetricShadow; // 0x49
    bool bOverride_bCastTranslucentShadows; // 0x4a
    bool bOverride_ContactShadows; // 0x4b
    bool bOverride_ContactShadowLength; // 0x4c
    char pad_4d[0x3];
    static ULumosScalabilityModifyShadows* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
