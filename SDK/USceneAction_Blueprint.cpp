#include "FLinearColor.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneActionState_Blueprint.hpp"
#include "USceneAction_Blueprint.hpp"
#include "USceneRig.hpp"
#include "USceneRigObjectActionBase.hpp"
#include "UTimeRig_StoryGraph.hpp"
#include "UTimeRig_StoryGraphNode.hpp"
float USceneAction_Blueprint::GetAutoDurationBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.GetAutoDurationBP"));
    struct Params_GetAutoDurationBP {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAutoDurationBP params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void USceneAction_Blueprint::OnPauseInsideInterval(bool bPause) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.OnPauseInsideInterval"));
    struct Params_OnPauseInsideInterval {
        bool bPause; // 0x0
    }; // Size: 0x1
    Params_OnPauseInsideInterval params{};
    params.bPause = (bool)bPause;
    ProcessEvent(func, &params);
}
void USceneAction_Blueprint::FinishNow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.FinishNow"));
    struct Params_FinishNow {
    }; // Size: 0x0
    Params_FinishNow params{};
    ProcessEvent(func, &params);
}
USceneAction_Blueprint* USceneAction_Blueprint::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_Blueprint");
    return (USceneAction_Blueprint*)res;
}
void USceneAction_Blueprint::SetBranchID(FName BranchID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.SetBranchID"));
    struct Params_SetBranchID {
        FName BranchID; // 0x0
    }; // Size: 0x8
    Params_SetBranchID params{};
    params.BranchID = (FName)BranchID;
    ProcessEvent(func, &params);
}
void USceneAction_Blueprint::OnInstantPostActorTick(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.OnInstantPostActorTick"));
    struct Params_OnInstantPostActorTick {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnInstantPostActorTick params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void USceneAction_Blueprint::OnSetTimeInsideInterval(float Time, float LocalTime, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.OnSetTimeInsideInterval"));
    struct Params_OnSetTimeInsideInterval {
        float Time; // 0x0
        float LocalTime; // 0x4
        bool IsScrubbing; // 0x8
    }; // Size: 0x9
    Params_OnSetTimeInsideInterval params{};
    params.Time = (float)Time;
    params.LocalTime = (float)LocalTime;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void USceneAction_Blueprint::SetAutoDurationBP(float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.SetAutoDurationBP"));
    struct Params_SetAutoDurationBP {
        float Duration; // 0x0
    }; // Size: 0x4
    Params_SetAutoDurationBP params{};
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void USceneAction_Blueprint::GetDisplayName() {}
void USceneAction_Blueprint::OnSetTimeInsideIntervalPostActorTick(float Time, float LocalTime, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.OnSetTimeInsideIntervalPostActorTick"));
    struct Params_OnSetTimeInsideIntervalPostActorTick {
        float Time; // 0x0
        float LocalTime; // 0x4
        bool IsScrubbing; // 0x8
    }; // Size: 0x9
    Params_OnSetTimeInsideIntervalPostActorTick params{};
    params.Time = (float)Time;
    params.LocalTime = (float)LocalTime;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void USceneAction_Blueprint::OnInstant(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.OnInstant"));
    struct Params_OnInstant {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnInstant params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void USceneAction_Blueprint::OnExitInterval(float Time, bool Cancelled, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.OnExitInterval"));
    struct Params_OnExitInterval {
        float Time; // 0x0
        bool Cancelled; // 0x4
        bool IsScrubbing; // 0x5
    }; // Size: 0x6
    Params_OnExitInterval params{};
    params.Time = (float)Time;
    params.Cancelled = (bool)Cancelled;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void USceneAction_Blueprint::OnEnterInterval(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.OnEnterInterval"));
    struct Params_OnEnterInterval {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnEnterInterval params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void USceneAction_Blueprint::OnDestroy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.OnDestroy"));
    struct Params_OnDestroy {
    }; // Size: 0x0
    Params_OnDestroy params{};
    ProcessEvent(func, &params);
}
void USceneAction_Blueprint::OnCreate(UObject* ActionState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.OnCreate"));
    struct Params_OnCreate {
        UObject* ActionState; // 0x0
    }; // Size: 0x8
    Params_OnCreate params{};
    params.ActionState = (UObject*)ActionState;
    ProcessEvent(func, &params);
}
bool USceneAction_Blueprint::IsProxyRequiredBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.IsProxyRequiredBP"));
    struct Params_IsProxyRequiredBP {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsProxyRequiredBP params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USceneAction_Blueprint::IsInstant() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.IsInstant"));
    struct Params_IsInstant {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInstant params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USceneAction_Blueprint::IsInEditor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.IsInEditor"));
    struct Params_IsInEditor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInEditor params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
USceneRig* USceneAction_Blueprint::GetSceneRig() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.GetSceneRig"));
    struct Params_GetSceneRig {
        USceneRig* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSceneRig params{};
    ProcessEvent(func, &params);
    return (USceneRig*)params.ReturnValue;
}
bool USceneAction_Blueprint::IsEnabledBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.IsEnabledBP"));
    struct Params_IsEnabledBP {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEnabledBP params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UObject* USceneAction_Blueprint::GetActionObjectBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.GetActionObjectBP"));
    struct Params_GetActionObjectBP {
        UObject* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActionObjectBP params{};
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
bool USceneAction_Blueprint::HasPostActorTick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.HasPostActorTick"));
    struct Params_HasPostActorTick {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasPostActorTick params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USceneAction_Blueprint::HasNormalTick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.HasNormalTick"));
    struct Params_HasNormalTick {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasNormalTick params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USceneAction_Blueprint::GetValidBranchIDsBP(UObject* Caller) {}
UTimeRig_StoryGraphNode* USceneAction_Blueprint::GetStoryGraphNode(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.GetStoryGraphNode"));
    struct Params_GetStoryGraphNode {
        UObject* Caller; // 0x0
        UTimeRig_StoryGraphNode* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetStoryGraphNode params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
    return (UTimeRig_StoryGraphNode*)params.ReturnValue;
}
bool USceneAction_Blueprint::DevOnly_IsHammerTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.DevOnly_IsHammerTime"));
    struct Params_DevOnly_IsHammerTime {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DevOnly_IsHammerTime params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UTimeRig_StoryGraph* USceneAction_Blueprint::GetStoryGraph(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.GetStoryGraph"));
    struct Params_GetStoryGraph {
        UObject* Caller; // 0x0
        UTimeRig_StoryGraph* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetStoryGraph params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
    return (UTimeRig_StoryGraph*)params.ReturnValue;
}
float USceneAction_Blueprint::GetStartTimeBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.GetStartTimeBP"));
    struct Params_GetStartTimeBP {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetStartTimeBP params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USceneAction_Blueprint::GetSortOrderPostActorTick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.GetSortOrderPostActorTick"));
    struct Params_GetSortOrderPostActorTick {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSortOrderPostActorTick params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USceneAction_Blueprint::GetSortOrder() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.GetSortOrder"));
    struct Params_GetSortOrder {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSortOrder params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USceneAction_Blueprint::GetIterationLength() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.GetIterationLength"));
    struct Params_GetIterationLength {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetIterationLength params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USceneAction_Blueprint::GetDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.GetDuration"));
    struct Params_GetDuration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDuration params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UObject* USceneAction_Blueprint::GetContext() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.GetContext"));
    struct Params_GetContext {
        UObject* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetContext params{};
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
FLinearColor USceneAction_Blueprint::GetActionColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.GetActionColor"));
    struct Params_GetActionColor {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetActionColor params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void USceneAction_Blueprint::FinishIn(float SecondsFromNow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneAction_Blueprint.FinishIn"));
    struct Params_FinishIn {
        float SecondsFromNow; // 0x0
    }; // Size: 0x4
    Params_FinishIn params{};
    params.SecondsFromNow = (float)SecondsFromNow;
    ProcessEvent(func, &params);
}
