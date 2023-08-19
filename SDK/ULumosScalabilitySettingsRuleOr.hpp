#pragma once
#include <cstdint>
#include "ULumosScalabilitySettingsRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilitySettingsRuleOr : public ULumosScalabilitySettingsRule {
public:
    TArray<ULumosScalabilitySettingsRule*> Rules; // 0x28
    static ULumosScalabilitySettingsRuleOr* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
