#pragma once
#include <cstdint>
#include "ULumosScalabilitySettingsRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilitySettingsRuleTag : public ULumosScalabilitySettingsRule {
public:
    FName ActorTag; // 0x28
    static ULumosScalabilitySettingsRuleTag* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
