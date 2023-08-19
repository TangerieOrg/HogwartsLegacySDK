#pragma once
#include <cstdint>
#include "FLerpVolumesLevelName.hpp"
#include "UDataAsset.hpp"
class UFXAutoTriggerBool;
#pragma pack(push, 1)
class UFXAutoTriggerHighContrastGameplayConditions : public UDataAsset {
public:
    TArray<UFXAutoTriggerBool*> AndConditions; // 0x30
    TArray<FLerpVolumesLevelName> ExcludeLevels; // 0x40
    static UFXAutoTriggerHighContrastGameplayConditions* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
