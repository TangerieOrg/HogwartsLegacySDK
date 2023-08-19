#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "ULumosScalabilitySettingsRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilitySettingsRuleNPCKey : public ULumosScalabilitySettingsRule {
public:
    FDbSingleColumnInfo NPCKey; // 0x28
    static ULumosScalabilitySettingsRuleNPCKey* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
