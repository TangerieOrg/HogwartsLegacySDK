#include "AActor.hpp"
#include "EAblAbilityTaskRealm.hpp"
#include "FAblQueryResult.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FVector2D.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblAbilityEvent.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblChannelingBase.hpp"
#include "UAblTargetingBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
bool UAblAbility::RequiresAllTasksComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.RequiresAllTasksComplete"));
    struct Params_RequiresAllTasksComplete {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RequiresAllTasksComplete params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UAblAbility::GetBaseCooldown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.GetBaseCooldown"));
    struct Params_GetBaseCooldown {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBaseCooldown params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UAblAbility* UAblAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbility");
    return (UAblAbility*)res;
}
void UAblAbility::OnSpawnedActorEvent(UAblAbilityContext* Context, FName& EventName, AActor* SpawnedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.OnSpawnedActorEvent"));
    struct Params_OnSpawnedActorEvent {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
        AActor* SpawnedActor; // 0x10
    }; // Size: 0x18
    Params_OnSpawnedActorEvent params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    params.SpawnedActor = (AActor*)SpawnedActor;
    ProcessEvent(func, &params);
    EventName = params.EventName;
}
bool UAblAbility::RequiresTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.RequiresTarget"));
    struct Params_RequiresTarget {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RequiresTarget params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAblAbility::CustomTargetingFindTargets(UAblAbilityContext* Context, TArray<AActor*>& FoundTargets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.CustomTargetingFindTargets"));
    struct Params_CustomTargetingFindTargets {
        UAblAbilityContext* Context; // 0x0
        TArray<AActor*> FoundTargets; // 0x8
    }; // Size: 0x18
    Params_CustomTargetingFindTargets params{};
    params.Context = (UAblAbilityContext*)Context;
    params.FoundTargets = (TArray<AActor*>)FoundTargets;
    ProcessEvent(func, &params);
    FoundTargets = params.FoundTargets;
}
UAblAbility* UAblAbility::OnGetBranchAbility(UAblAbilityContext* Context, FName& EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.OnGetBranchAbility"));
    struct Params_OnGetBranchAbility {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
        UAblAbility* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_OnGetBranchAbility params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
    EventName = params.EventName;
    return (UAblAbility*)params.ReturnValue;
}
bool UAblAbility::RefreshLoopTimeOnly() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.RefreshLoopTimeOnly"));
    struct Params_RefreshLoopTimeOnly {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RefreshLoopTimeOnly params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAblAbility::OnRaycastEvent(UAblAbilityContext* Context, FName& EventName, TArray<FHitResult>& HitResults) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.OnRaycastEvent"));
    struct Params_OnRaycastEvent {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
        TArray<FHitResult> HitResults; // 0x10
    }; // Size: 0x20
    Params_OnRaycastEvent params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    params.HitResults = (TArray<FHitResult>)HitResults;
    ProcessEvent(func, &params);
    EventName = params.EventName;
    HitResults = params.HitResults;
}
bool UAblAbility::RefreshDurationOnNewStack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.RefreshDurationOnNewStack"));
    struct Params_RefreshDurationOnNewStack {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RefreshDurationOnNewStack params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAblAbility::IsChanneled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.IsChanneled"));
    struct Params_IsChanneled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsChanneled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAblAbility::OnCustomEvent(UAblAbilityContext* Context, FName& EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.OnCustomEvent"));
    struct Params_OnCustomEvent {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
    }; // Size: 0x10
    Params_OnCustomEvent params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
    EventName = params.EventName;
}
void UAblAbility::OnCollisionEvent(UAblAbilityContext* Context, FName& EventName, TArray<FAblQueryResult>& HitEntities) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.OnCollisionEvent"));
    struct Params_OnCollisionEvent {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
        TArray<FAblQueryResult> HitEntities; // 0x10
    }; // Size: 0x20
    Params_OnCollisionEvent params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    params.HitEntities = (TArray<FAblQueryResult>)HitEntities;
    ProcessEvent(func, &params);
    EventName = params.EventName;
    HitEntities = params.HitEntities;
}
float UAblAbility::CalculateDamageForActor(UAblAbilityContext* Context, FName& EventName, float BaseDamage, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.CalculateDamageForActor"));
    struct Params_CalculateDamageForActor {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
        float BaseDamage; // 0x10
        char pad_14[0x4];
        AActor* Actor; // 0x18
        float ReturnValue; // 0x20
    }; // Size: 0x24
    Params_CalculateDamageForActor params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    params.BaseDamage = (float)BaseDamage;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
    EventName = params.EventName;
    return (float)params.ReturnValue;
}
void UAblAbility::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UAblAbility::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UAblAbility::OnAbilityEnd(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UAblAbility::OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
int32_t UAblAbility::GetMaxStacks(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.GetMaxStacks"));
    struct Params_GetMaxStacks {
        UAblAbilityContext* Context; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMaxStacks params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UAblAbility::MustPassAllChannelConditions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.MustPassAllChannelConditions"));
    struct Params_MustPassAllChannelConditions {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_MustPassAllChannelConditions params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAblAbility::IsPassive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.IsPassive"));
    struct Params_IsPassive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPassive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UAblAbility::GetDisplayName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.GetDisplayName"));
    struct Params_GetDisplayName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDisplayName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UAblAbility::IsLooping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.IsLooping"));
    struct Params_IsLooping {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLooping params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UAblAbility::GetBaseMaxStacks() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.GetBaseMaxStacks"));
    struct Params_GetBaseMaxStacks {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBaseMaxStacks params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UAblAbility::GetRange() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.GetRange"));
    struct Params_GetRange {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRange params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UAblAbility::GetLoopMaxIterationsBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.GetLoopMaxIterationsBP"));
    struct Params_GetLoopMaxIterationsBP {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLoopMaxIterationsBP params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector2D UAblAbility::GetLoopRange() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.GetLoopRange"));
    struct Params_GetLoopRange {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLoopRange params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
float UAblAbility::GetLength() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.GetLength"));
    struct Params_GetLength {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLength params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAblAbility::GetCooldown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.GetCooldown"));
    struct Params_GetCooldown {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCooldown params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAblAbility::GetBasePlayRate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.GetBasePlayRate"));
    struct Params_GetBasePlayRate {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBasePlayRate params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UAblAbility::AlwaysRefreshDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.AlwaysRefreshDuration"));
    struct Params_AlwaysRefreshDuration {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AlwaysRefreshDuration params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FGameplayTagContainer UAblAbility::GetAbilityTagContainer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.GetAbilityTagContainer"));
    struct Params_GetAbilityTagContainer {
        FGameplayTagContainer ReturnValue; // 0x0
    }; // Size: 0x20
    Params_GetAbilityTagContainer params{};
    ProcessEvent(func, &params);
    return (FGameplayTagContainer)params.ReturnValue;
}
bool UAblAbility::CustomFilterCondition(UAblAbilityContext* Context, FName& EventName, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.CustomFilterCondition"));
    struct Params_CustomFilterCondition {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
        AActor* Actor; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_CustomFilterCondition params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
    EventName = params.EventName;
    return (bool)params.ReturnValue;
}
bool UAblAbility::CustomCanLoopExecute(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.CustomCanLoopExecute"));
    struct Params_CustomCanLoopExecute {
        UAblAbilityContext* Context; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CustomCanLoopExecute params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAblAbility::CustomCanBranchTo(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.CustomCanBranchTo"));
    struct Params_CustomCanBranchTo {
        UAblAbilityContext* Context; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CustomCanBranchTo params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAblAbility::CustomCanAbilityExecute(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.CustomCanAbilityExecute"));
    struct Params_CustomCanAbilityExecute {
        UAblAbilityContext* Context; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CustomCanAbilityExecute params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAblAbility::CheckCustomChannelConditional(UAblAbilityContext* Context, FName& EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.CheckCustomChannelConditional"));
    struct Params_CheckCustomChannelConditional {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CheckCustomChannelConditional params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
    EventName = params.EventName;
    return (bool)params.ReturnValue;
}
bool UAblAbility::CanInterruptAbility(UAblAbilityContext* Context, UAblAbility* CurrentAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.CanInterruptAbility"));
    struct Params_CanInterruptAbility {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* CurrentAbility; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CanInterruptAbility params{};
    params.Context = (UAblAbilityContext*)Context;
    params.CurrentAbility = (UAblAbility*)CurrentAbility;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UAblAbility::CalculateCooldown(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbility.CalculateCooldown"));
    struct Params_CalculateCooldown {
        UAblAbilityContext* Context; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_CalculateCooldown params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
