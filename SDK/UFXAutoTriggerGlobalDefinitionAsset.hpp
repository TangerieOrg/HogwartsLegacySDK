#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UFXAutoTriggerDefinitionAsset;
class UFXAutoTriggerGroupDefinitionAsset;
class UFXAutoTriggerPrerequisiteBase;
#pragma pack(push, 1)
class UFXAutoTriggerGlobalDefinitionAsset : public UDataAsset {
public:
    TArray<UFXAutoTriggerDefinitionAsset*> GlobalDefinitions; // 0x30
    TArray<UFXAutoTriggerGroupDefinitionAsset*> GroupDefinitions; // 0x40
    TArray<UFXAutoTriggerPrerequisiteBase*> GlobalPrerequisites; // 0x50
    char pad_60[0x50];
    static UFXAutoTriggerGlobalDefinitionAsset* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
