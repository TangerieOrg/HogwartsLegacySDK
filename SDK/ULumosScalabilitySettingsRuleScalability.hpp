#pragma once
#include <cstdint>
#include "EPhoenixScalabilityCategory.hpp"
#include "ULumosScalabilitySettingsRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilitySettingsRuleScalability : public ULumosScalabilitySettingsRule {
public:
    EPhoenixScalabilityCategory Category; // 0x28
    char pad_29[0x3];
    int32_t Levels; // 0x2c
    static ULumosScalabilitySettingsRuleScalability* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
