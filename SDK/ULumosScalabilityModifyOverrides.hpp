#pragma once
#include <cstdint>
#include "ULumosScalabilityModifyWithRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilityModifyOverrides : public ULumosScalabilityModifyWithRule {
public:
    float MinDistance; // 0x40
    float OuterConeAngle; // 0x44
    bool bOverride_MinDistance; // 0x48
    bool bOverride_OuterConeAngle; // 0x49
    char pad_4a[0x6];
    static ULumosScalabilityModifyOverrides* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
