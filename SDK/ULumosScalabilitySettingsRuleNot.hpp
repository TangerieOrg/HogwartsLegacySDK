#pragma once
#include <cstdint>
#include "ULumosScalabilitySettingsRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilitySettingsRuleNot : public ULumosScalabilitySettingsRule {
public:
    ULumosScalabilitySettingsRule* Rule; // 0x28
    static ULumosScalabilitySettingsRuleNot* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
