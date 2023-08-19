#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblPlayMultiFxAssetBaseTask : public UAblAbilityTask {
public:
    FVector Location; // 0x70
    FRotator Rotation; // 0x7c
    FName AttachPointName; // 0x88
    TArray<UAblTaskCondition*> TaskConditions; // 0x90
    static UAblPlayMultiFxAssetBaseTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
