#include "AAble_Character.hpp"
#include "AActor.hpp"
#include "AAnimationArchitect_Character.hpp"
#include "EInteractionProject.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityComponent.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblPhysicalBodyManager.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "URagdollControlComponent.hpp"
void AAble_Character::CancelAbilityByContext(UAblAbilityContext* InAblAbilityContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_Character.CancelAbilityByContext"));
    struct Params_CancelAbilityByContext {
        UAblAbilityContext* InAblAbilityContext; // 0x0
    }; // Size: 0x8
    Params_CancelAbilityByContext params{};
    params.InAblAbilityContext = (UAblAbilityContext*)InAblAbilityContext;
    ProcessEvent(func, &params);
}
AAble_Character* AAble_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.Able_Character");
    return (AAble_Character*)res;
}
bool AAble_Character::PlayAbilityByClass(FName InAbilityChannelName, UClass* InAblAbilitClass, AActor* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_Character.PlayAbilityByClass"));
    struct Params_PlayAbilityByClass {
        FName InAbilityChannelName; // 0x0
        UClass* InAblAbilitClass; // 0x8
        AActor* InInstigator; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_PlayAbilityByClass params{};
    params.InAbilityChannelName = (FName)InAbilityChannelName;
    params.InAblAbilitClass = (UClass*)InAblAbilitClass;
    params.InInstigator = (AActor*)InInstigator;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AAble_Character::GetAbilityWithMultipleAssetsAndTags(FGameplayTagContainer& InSourceTagContainer, TArray<UInteractionArchitectAsset*>& InArchitectAssets, TArray<FGameplayTagContainer>& InArchitectTags, EInteractionProject Project, bool& bOutIsAdditive, UClass*& OutAbilityClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_Character.GetAbilityWithMultipleAssetsAndTags"));
    struct Params_GetAbilityWithMultipleAssetsAndTags {
        FGameplayTagContainer InSourceTagContainer; // 0x0
        TArray<UInteractionArchitectAsset*> InArchitectAssets; // 0x20
        TArray<FGameplayTagContainer> InArchitectTags; // 0x30
        EInteractionProject Project; // 0x40
        bool bOutIsAdditive; // 0x41
        char pad_42[0x6];
        UClass* OutAbilityClass; // 0x48
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_GetAbilityWithMultipleAssetsAndTags params{};
    params.InSourceTagContainer = (FGameplayTagContainer)InSourceTagContainer;
    params.InArchitectAssets = (TArray<UInteractionArchitectAsset*>)InArchitectAssets;
    params.InArchitectTags = (TArray<FGameplayTagContainer>)InArchitectTags;
    params.Project = (EInteractionProject)Project;
    params.bOutIsAdditive = (bool)bOutIsAdditive;
    params.OutAbilityClass = (UClass*)OutAbilityClass;
    ProcessEvent(func, &params);
    InSourceTagContainer = params.InSourceTagContainer;
    InArchitectAssets = params.InArchitectAssets;
    OutAbilityClass = params.OutAbilityClass;
    InArchitectTags = params.InArchitectTags;
    bOutIsAdditive = params.bOutIsAdditive;
    return (bool)params.ReturnValue;
}
bool AAble_Character::GetAbilityWithMultipleAssets(FGameplayTagContainer& InSourceTagContainer, TArray<UInteractionArchitectAsset*>& InArchitectAssets, FGameplayTagContainer& InArchitectTagContainer, EInteractionProject Project, bool& bOutIsAdditive, UClass*& OutAbilityClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_Character.GetAbilityWithMultipleAssets"));
    struct Params_GetAbilityWithMultipleAssets {
        FGameplayTagContainer InSourceTagContainer; // 0x0
        TArray<UInteractionArchitectAsset*> InArchitectAssets; // 0x20
        FGameplayTagContainer InArchitectTagContainer; // 0x30
        EInteractionProject Project; // 0x50
        bool bOutIsAdditive; // 0x51
        char pad_52[0x6];
        UClass* OutAbilityClass; // 0x58
        bool ReturnValue; // 0x60
    }; // Size: 0x61
    Params_GetAbilityWithMultipleAssets params{};
    params.InSourceTagContainer = (FGameplayTagContainer)InSourceTagContainer;
    params.InArchitectAssets = (TArray<UInteractionArchitectAsset*>)InArchitectAssets;
    params.InArchitectTagContainer = (FGameplayTagContainer)InArchitectTagContainer;
    params.Project = (EInteractionProject)Project;
    params.bOutIsAdditive = (bool)bOutIsAdditive;
    params.OutAbilityClass = (UClass*)OutAbilityClass;
    ProcessEvent(func, &params);
    InSourceTagContainer = params.InSourceTagContainer;
    InArchitectAssets = params.InArchitectAssets;
    OutAbilityClass = params.OutAbilityClass;
    InArchitectTagContainer = params.InArchitectTagContainer;
    bOutIsAdditive = params.bOutIsAdditive;
    return (bool)params.ReturnValue;
}
bool AAble_Character::GetAbilityFromInteractionArchitect(FGameplayTagContainer& InSourceTagContainer, UInteractionArchitectAsset* InArchitectAsset, FGameplayTagContainer& InArchitectTagContainer, EInteractionProject Project, bool& bOutIsAdditive, UClass*& OutAbilityClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_Character.GetAbilityFromInteractionArchitect"));
    struct Params_GetAbilityFromInteractionArchitect {
        FGameplayTagContainer InSourceTagContainer; // 0x0
        UInteractionArchitectAsset* InArchitectAsset; // 0x20
        FGameplayTagContainer InArchitectTagContainer; // 0x28
        EInteractionProject Project; // 0x48
        bool bOutIsAdditive; // 0x49
        char pad_4a[0x6];
        UClass* OutAbilityClass; // 0x50
        bool ReturnValue; // 0x58
    }; // Size: 0x59
    Params_GetAbilityFromInteractionArchitect params{};
    params.InSourceTagContainer = (FGameplayTagContainer)InSourceTagContainer;
    params.InArchitectAsset = (UInteractionArchitectAsset*)InArchitectAsset;
    params.InArchitectTagContainer = (FGameplayTagContainer)InArchitectTagContainer;
    params.Project = (EInteractionProject)Project;
    params.bOutIsAdditive = (bool)bOutIsAdditive;
    params.OutAbilityClass = (UClass*)OutAbilityClass;
    ProcessEvent(func, &params);
    InSourceTagContainer = params.InSourceTagContainer;
    InArchitectTagContainer = params.InArchitectTagContainer;
    bOutIsAdditive = params.bOutIsAdditive;
    OutAbilityClass = params.OutAbilityClass;
    return (bool)params.ReturnValue;
}
bool AAble_Character::ExecuteAbilityOnChannelByClass(FName ChannelName, UClass* InAblAbilitClass, AActor* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_Character.ExecuteAbilityOnChannelByClass"));
    struct Params_ExecuteAbilityOnChannelByClass {
        FName ChannelName; // 0x0
        UClass* InAblAbilitClass; // 0x8
        AActor* InInstigator; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_ExecuteAbilityOnChannelByClass params{};
    params.ChannelName = (FName)ChannelName;
    params.InAblAbilitClass = (UClass*)InAblAbilitClass;
    params.InInstigator = (AActor*)InInstigator;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AAble_Character::ExecuteAbilityByClass(UClass* InAblAbilitClass, AActor* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_Character.ExecuteAbilityByClass"));
    struct Params_ExecuteAbilityByClass {
        UClass* InAblAbilitClass; // 0x0
        AActor* InInstigator; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ExecuteAbilityByClass params{};
    params.InAblAbilitClass = (UClass*)InAblAbilitClass;
    params.InInstigator = (AActor*)InInstigator;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AAble_Character::CancelAbilityByChannel(FName InAbilityChannelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_Character.CancelAbilityByChannel"));
    struct Params_CancelAbilityByChannel {
        FName InAbilityChannelName; // 0x0
    }; // Size: 0x8
    Params_CancelAbilityByChannel params{};
    params.InAbilityChannelName = (FName)InAbilityChannelName;
    ProcessEvent(func, &params);
}
