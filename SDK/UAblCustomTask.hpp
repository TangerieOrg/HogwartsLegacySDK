#pragma once
#include <cstdint>
#include "EAblAbilityTaskRealm.hpp"
#include "EAblAbilityTaskResult.hpp"
#include "FLinearColor.hpp"
#include "UAblAbilityTask.hpp"
class UAblAbilityContext;
class UAblCustomTaskScratchPad;
class AActor;
#pragma pack(push, 1)
class UAblCustomTask : public UAblAbilityTask {
public:
    static UAblCustomTask* StaticClass();
    void OnTaskTickBP(UAblAbilityContext* Context, float DeltaTime);
    void OnTaskStartBP(UAblAbilityContext* Context);
    void OnTaskEndBP(UAblAbilityContext* Context, EAblAbilityTaskResult Result);
    bool IsSingleFrameBP();
    bool IsDoneBP(UAblAbilityContext* Context);
    EAblAbilityTaskRealm GetTaskRealmBP();
    void GetTaskNameBP();
    void GetTaskDescriptionBP();
    FLinearColor GetTaskColorBP();
    void GetTaskCategoryBP();
    UAblCustomTaskScratchPad* GetScratchPad(UAblAbilityContext* Context);
    void GetDescriptiveTaskNameBP();
    void GetActorsForTaskBP(UAblAbilityContext* Context, TArray<AActor*>& OutActorArray);
    UAblCustomTaskScratchPad* CreateScratchPadBP(UAblAbilityContext* Context);
}; // Size: 0x70
#pragma pack(pop)
