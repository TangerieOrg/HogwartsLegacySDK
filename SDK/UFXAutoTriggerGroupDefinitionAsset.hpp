#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UFXAutoTriggerPrerequisiteBase;
class UFXAutoTriggerDefinitionAsset;
#pragma pack(push, 1)
class UFXAutoTriggerGroupDefinitionAsset : public UDataAsset {
public:
    FName Group; // 0x30
    TArray<UFXAutoTriggerPrerequisiteBase*> GroupPrerequisites; // 0x38
    TArray<UFXAutoTriggerDefinitionAsset*> Definitions; // 0x48
    bool bRunWithGlobalActors; // 0x58
    char pad_59[0x57];
    static UFXAutoTriggerGroupDefinitionAsset* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
