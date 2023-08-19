#include "AActor.hpp"
#include "EAblAbilityStartResult.hpp"
#include "EAblAbilityTaskResult.hpp"
#include "FAblUberAbility.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FGameplayTagQuery.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityAsset.hpp"
#include "UAblAbilityComponent.hpp"
#include "UAblAbilityContext.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
void UAblAbilityComponent::PauseAllAbilities() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.PauseAllAbilities"));
    struct Params_PauseAllAbilities {
    }; // Size: 0x0
    Params_PauseAllAbilities params{};
    ProcessEvent(func, &params);
}
UAblAbilityComponent* UAblAbilityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityComponent");
    return (UAblAbilityComponent*)res;
}
void UAblAbilityComponent::ActorHiddenTimeout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.ActorHiddenTimeout"));
    struct Params_ActorHiddenTimeout {
    }; // Size: 0x0
    Params_ActorHiddenTimeout params{};
    ProcessEvent(func, &params);
}
void UAblAbilityComponent::UnpauseAllAbilities() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.UnpauseAllAbilities"));
    struct Params_UnpauseAllAbilities {
    }; // Size: 0x0
    Params_UnpauseAllAbilities params{};
    ProcessEvent(func, &params);
}
void UAblAbilityComponent::TriggerAbleEvent(AActor* AbleOwner, AActor* AbleSender, FName EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.TriggerAbleEvent"));
    struct Params_TriggerAbleEvent {
        AActor* AbleOwner; // 0x0
        AActor* AbleSender; // 0x8
        FName EventName; // 0x10
    }; // Size: 0x18
    Params_TriggerAbleEvent params{};
    params.AbleOwner = (AActor*)AbleOwner;
    params.AbleSender = (AActor*)AbleSender;
    params.EventName = (FName)EventName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAblAbilityComponent::SetIgnorePlayAbility(bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.SetIgnorePlayAbility"));
    struct Params_SetIgnorePlayAbility {
        bool bFlag; // 0x0
    }; // Size: 0x1
    Params_SetIgnorePlayAbility params{};
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
void UAblAbilityComponent::RemoveTag(FGameplayTag Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.RemoveTag"));
    struct Params_RemoveTag {
        FGameplayTag Tag; // 0x0
    }; // Size: 0x8
    Params_RemoveTag params{};
    params.Tag = (FGameplayTag)Tag;
    ProcessEvent(func, &params);
}
bool UAblAbilityComponent::IsPassiveActive(UAblAbility* Ability) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.IsPassiveActive"));
    struct Params_IsPassiveActive {
        UAblAbility* Ability; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsPassiveActive params{};
    params.Ability = (UAblAbility*)Ability;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAblAbilityComponent::MatchesQuery(FGameplayTagQuery Query) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.MatchesQuery"));
    struct Params_MatchesQuery {
        FGameplayTagQuery Query; // 0x0
        bool ReturnValue; // 0x48
    }; // Size: 0x49
    Params_MatchesQuery params{};
    params.Query = (FGameplayTagQuery)Query;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAblAbilityComponent::IsAbilityPaused(UAblAbility* Ability) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.IsAbilityPaused"));
    struct Params_IsAbilityPaused {
        UAblAbility* Ability; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsAbilityPaused params{};
    params.Ability = (UAblAbility*)Ability;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAblAbilityComponent::PauseAbility(bool bEnable, UAblAbility* Abilit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.PauseAbility"));
    struct Params_PauseAbility {
        bool bEnable; // 0x0
        char pad_1[0x7];
        UAblAbility* Abilit; // 0x8
    }; // Size: 0x10
    Params_PauseAbility params{};
    params.bEnable = (bool)bEnable;
    params.Abilit = (UAblAbility*)Abilit;
    ProcessEvent(func, &params);
}
EAblAbilityStartResult UAblAbilityComponent::ActivateAbility(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.ActivateAbility"));
    struct Params_ActivateAbility {
        UAblAbilityContext* Context; // 0x0
        EAblAbilityStartResult ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ActivateAbility params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
    return (EAblAbilityStartResult)params.ReturnValue;
}
bool UAblAbilityComponent::MatchesAnyTag(FGameplayTagContainer Container) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.MatchesAnyTag"));
    struct Params_MatchesAnyTag {
        FGameplayTagContainer Container; // 0x0
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_MatchesAnyTag params{};
    params.Container = (FGameplayTagContainer)Container;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FGameplayTagContainer UAblAbilityComponent::GetGameplayTagContainerBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.GetGameplayTagContainerBP"));
    struct Params_GetGameplayTagContainerBP {
        FGameplayTagContainer ReturnValue; // 0x0
    }; // Size: 0x20
    Params_GetGameplayTagContainerBP params{};
    ProcessEvent(func, &params);
    return (FGameplayTagContainer)params.ReturnValue;
}
bool UAblAbilityComponent::MatchesAllTags(FGameplayTagContainer Container) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.MatchesAllTags"));
    struct Params_MatchesAllTags {
        FGameplayTagContainer Container; // 0x0
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_MatchesAllTags params{};
    params.Container = (FGameplayTagContainer)Container;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAblAbilityComponent::IsPlayingAbility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.IsPlayingAbility"));
    struct Params_IsPlayingAbility {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayingAbility params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAblAbilityComponent::HasTag(FGameplayTag Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.HasTag"));
    struct Params_HasTag {
        FGameplayTag Tag; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasTag params{};
    params.Tag = (FGameplayTag)Tag;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAblAbilityComponent::HasAbilityAnimation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.HasAbilityAnimation"));
    struct Params_HasAbilityAnimation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasAbilityAnimation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAblAbility* UAblAbilityComponent::GetActiveAbility_New(FName ChannelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.GetActiveAbility_New"));
    struct Params_GetActiveAbility_New {
        FName ChannelName; // 0x0
        UAblAbility* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetActiveAbility_New params{};
    params.ChannelName = (FName)ChannelName;
    ProcessEvent(func, &params);
    return (UAblAbility*)params.ReturnValue;
}
UAblAbility* UAblAbilityComponent::GetActiveAbility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.GetActiveAbility"));
    struct Params_GetActiveAbility {
        UAblAbility* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveAbility params{};
    ProcessEvent(func, &params);
    return (UAblAbility*)params.ReturnValue;
}
void UAblAbilityComponent::CancelAllAbilities(EAblAbilityTaskResult ResultToUse, bool bHideActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.CancelAllAbilities"));
    struct Params_CancelAllAbilities {
        EAblAbilityTaskResult ResultToUse; // 0x0
        bool bHideActor; // 0x1
    }; // Size: 0x2
    Params_CancelAllAbilities params{};
    params.ResultToUse = (EAblAbilityTaskResult)ResultToUse;
    params.bHideActor = (bool)bHideActor;
    ProcessEvent(func, &params);
}
void UAblAbilityComponent::CancelAbilityChannel(FName& ChannelName, EAblAbilityTaskResult ResultToUse, bool bHideActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.CancelAbilityChannel"));
    struct Params_CancelAbilityChannel {
        FName ChannelName; // 0x0
        EAblAbilityTaskResult ResultToUse; // 0x8
        bool bHideActor; // 0x9
    }; // Size: 0xa
    Params_CancelAbilityChannel params{};
    params.ChannelName = (FName)ChannelName;
    params.ResultToUse = (EAblAbilityTaskResult)ResultToUse;
    params.bHideActor = (bool)bHideActor;
    ProcessEvent(func, &params);
    ChannelName = params.ChannelName;
}
void UAblAbilityComponent::CancelAbility(UAblAbility* Ability, EAblAbilityTaskResult ResultToUse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.CancelAbility"));
    struct Params_CancelAbility {
        UAblAbility* Ability; // 0x0
        EAblAbilityTaskResult ResultToUse; // 0x8
    }; // Size: 0x9
    Params_CancelAbility params{};
    params.Ability = (UAblAbility*)Ability;
    params.ResultToUse = (EAblAbilityTaskResult)ResultToUse;
    ProcessEvent(func, &params);
}
EAblAbilityStartResult UAblAbilityComponent::CanActivateAbility(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.CanActivateAbility"));
    struct Params_CanActivateAbility {
        UAblAbilityContext* Context; // 0x0
        EAblAbilityStartResult ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CanActivateAbility params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
    return (EAblAbilityStartResult)params.ReturnValue;
}
EAblAbilityStartResult UAblAbilityComponent::BranchAbility(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.BranchAbility"));
    struct Params_BranchAbility {
        UAblAbilityContext* Context; // 0x0
        EAblAbilityStartResult ReturnValue; // 0x8
    }; // Size: 0x9
    Params_BranchAbility params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
    return (EAblAbilityStartResult)params.ReturnValue;
}
void UAblAbilityComponent::AddTag(FGameplayTag Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityComponent.AddTag"));
    struct Params_AddTag {
        FGameplayTag Tag; // 0x0
    }; // Size: 0x8
    Params_AddTag params{};
    params.Tag = (FGameplayTag)Tag;
    ProcessEvent(func, &params);
}
