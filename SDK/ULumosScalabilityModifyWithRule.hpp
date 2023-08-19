#pragma once
#include <cstdint>
#include "ULumosScalabilityModifyBase.hpp"
class ULumosScalabilitySettingsRule;
#pragma pack(push, 1)
class ULumosScalabilityModifyWithRule : public ULumosScalabilityModifyBase {
public:
    ULumosScalabilitySettingsRule* Rule; // 0x30
    int32_t LightingScenarios; // 0x38
    char pad_3c[0x4];
    static ULumosScalabilityModifyWithRule* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
