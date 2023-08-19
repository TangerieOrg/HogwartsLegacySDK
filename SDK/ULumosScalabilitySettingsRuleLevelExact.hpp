#pragma once
#include <cstdint>
#include "FLerpVolumesLevelName.hpp"
#include "ULumosScalabilitySettingsRuleLevelBase.hpp"
#pragma pack(push, 1)
class ULumosScalabilitySettingsRuleLevelExact : public ULumosScalabilitySettingsRuleLevelBase {
public:
    FLerpVolumesLevelName Level; // 0x28
    static ULumosScalabilitySettingsRuleLevelExact* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
