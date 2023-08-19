#pragma once
#include <cstdint>
#include "FLerpVolumesLevelName.hpp"
#include "ULumosScalabilitySettingsRuleLevelBase.hpp"
#pragma pack(push, 1)
class ULumosScalabilitySettingsRuleLevelsExact : public ULumosScalabilitySettingsRuleLevelBase {
public:
    TArray<FLerpVolumesLevelName> Levels; // 0x28
    static ULumosScalabilitySettingsRuleLevelsExact* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
