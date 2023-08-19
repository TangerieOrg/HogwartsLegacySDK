#pragma once
#include <cstdint>
#include "ULumosScalabilitySettingsRule.hpp"
#pragma pack(push, 1)
class ULumosScalabilitySettingsRulePlatforms : public ULumosScalabilitySettingsRule {
public:
    int32_t Platforms; // 0x28
    char pad_2c[0x4];
    static ULumosScalabilitySettingsRulePlatforms* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
