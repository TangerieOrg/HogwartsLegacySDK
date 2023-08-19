#include "AActor.hpp"
#include "EAblAbilityTaskRealm.hpp"
#include "EAblAbilityTaskResult.hpp"
#include "FLinearColor.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblCustomTask.hpp"
#include "UAblCustomTaskScratchPad.hpp"
#include "UFunction.hpp"
UAblCustomTask* UAblCustomTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCustomTask");
    return (UAblCustomTask*)res;
}
void UAblCustomTask::GetTaskCategoryBP() {}
void UAblCustomTask::OnTaskTickBP(UAblAbilityContext* Context, float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblCustomTask.OnTaskTickBP"));
    struct Params_OnTaskTickBP {
        UAblAbilityContext* Context; // 0x0
        float DeltaTime; // 0x8
    }; // Size: 0xc
    Params_OnTaskTickBP params{};
    params.Context = (UAblAbilityContext*)Context;
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
bool UAblCustomTask::IsSingleFrameBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblCustomTask.IsSingleFrameBP"));
    struct Params_IsSingleFrameBP {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSingleFrameBP params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAblCustomTask::GetTaskNameBP() {}
void UAblCustomTask::OnTaskStartBP(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblCustomTask.OnTaskStartBP"));
    struct Params_OnTaskStartBP {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnTaskStartBP params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UAblCustomTask::OnTaskEndBP(UAblAbilityContext* Context, EAblAbilityTaskResult Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblCustomTask.OnTaskEndBP"));
    struct Params_OnTaskEndBP {
        UAblAbilityContext* Context; // 0x0
        EAblAbilityTaskResult Result; // 0x8
    }; // Size: 0x9
    Params_OnTaskEndBP params{};
    params.Context = (UAblAbilityContext*)Context;
    params.Result = (EAblAbilityTaskResult)Result;
    ProcessEvent(func, &params);
}
EAblAbilityTaskRealm UAblCustomTask::GetTaskRealmBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblCustomTask.GetTaskRealmBP"));
    struct Params_GetTaskRealmBP {
        EAblAbilityTaskRealm ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTaskRealmBP params{};
    ProcessEvent(func, &params);
    return (EAblAbilityTaskRealm)params.ReturnValue;
}
bool UAblCustomTask::IsDoneBP(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblCustomTask.IsDoneBP"));
    struct Params_IsDoneBP {
        UAblAbilityContext* Context; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsDoneBP params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAblCustomTask::GetTaskDescriptionBP() {}
FLinearColor UAblCustomTask::GetTaskColorBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblCustomTask.GetTaskColorBP"));
    struct Params_GetTaskColorBP {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetTaskColorBP params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
UAblCustomTaskScratchPad* UAblCustomTask::GetScratchPad(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblCustomTask.GetScratchPad"));
    struct Params_GetScratchPad {
        UAblAbilityContext* Context; // 0x0
        UAblCustomTaskScratchPad* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetScratchPad params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
    return (UAblCustomTaskScratchPad*)params.ReturnValue;
}
void UAblCustomTask::GetDescriptiveTaskNameBP() {}
void UAblCustomTask::GetActorsForTaskBP(UAblAbilityContext* Context, TArray<AActor*>& OutActorArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblCustomTask.GetActorsForTaskBP"));
    struct Params_GetActorsForTaskBP {
        UAblAbilityContext* Context; // 0x0
        TArray<AActor*> OutActorArray; // 0x8
    }; // Size: 0x18
    Params_GetActorsForTaskBP params{};
    params.Context = (UAblAbilityContext*)Context;
    params.OutActorArray = (TArray<AActor*>)OutActorArray;
    ProcessEvent(func, &params);
    OutActorArray = params.OutActorArray;
}
UAblCustomTaskScratchPad* UAblCustomTask::CreateScratchPadBP(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblCustomTask.CreateScratchPadBP"));
    struct Params_CreateScratchPadBP {
        UAblAbilityContext* Context; // 0x0
        UAblCustomTaskScratchPad* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CreateScratchPadBP params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
    return (UAblCustomTaskScratchPad*)params.ReturnValue;
}
