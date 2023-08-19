#pragma once
#include <cstdint>
#include "ULumosScalabilityOverrideBase.hpp"
class ULumosScalabilitySettingsRule;
#pragma pack(push, 1)
class ULumosScalabilityOverrideWithRule : public ULumosScalabilityOverrideBase {
public:
    ULumosScalabilitySettingsRule* Rule; // 0x28
    static ULumosScalabilityOverrideWithRule* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
