#pragma once
#include <cstdint>
#include "FAblMultiFxChildTask.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
class UMultiFX2_Base;
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblPlayMultiFxTask : public UAblAbilityTask {
public:
    FName MultiFXHandleName; // 0x70
    TArray<UMultiFX2_Base*> FX; // 0x78
    FVector Location; // 0x88
    FRotator Rotation; // 0x94
    FName AttachPointName; // 0xa0
    bool bShutdownPreviousEffect; // 0xa8
    bool bDeactivateOnTaskEnd; // 0xa9
    char pad_aa[0x6];
    TArray<UAblTaskCondition*> TaskConditions; // 0xb0
    TArray<FAblMultiFxChildTask> ChildTasks; // 0xc0
    static UAblPlayMultiFxTask* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
