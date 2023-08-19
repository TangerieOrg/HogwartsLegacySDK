#pragma once
#include <cstdint>
#include "FFXAutoTriggerFXSpawnInfo.hpp"
#include "FMultiFX2Var.hpp"
#include "UDataAsset.hpp"
class UFXAutoTriggerPrerequisiteBase;
class UFXAutoTriggerRequiredActorsBase;
class UFXAutoTriggerConditionBase;
class UFXAutoTriggerUpdateBase;
#pragma pack(push, 1)
class UFXAutoTriggerDefinitionAsset : public UDataAsset {
public:
    FName Name; // 0x30
    UFXAutoTriggerPrerequisiteBase* Prerequisite; // 0x38
    UFXAutoTriggerRequiredActorsBase* RequiredActors; // 0x40
    UFXAutoTriggerConditionBase* TriggerCondition; // 0x48
    TArray<UFXAutoTriggerUpdateBase*> Updates; // 0x50
    TArray<FMultiFX2Var> FX; // 0x60
    FFXAutoTriggerFXSpawnInfo DefaultSpawnInfo; // 0x70
    int32_t SleepWhenFinishingImmediately; // 0x98
    int32_t SleepWhenStartFails; // 0x9c
    static UFXAutoTriggerDefinitionAsset* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
