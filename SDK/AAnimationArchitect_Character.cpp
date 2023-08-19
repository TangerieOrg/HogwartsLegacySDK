#include "AAnimationArchitect_Character.hpp"
#include "ACharacter.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAnimationArchitectComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
AAnimationArchitect_Character* AAnimationArchitect_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.AnimationArchitect_Character");
    return (AAnimationArchitect_Character*)res;
}
void AAnimationArchitect_Character::AddAnimationArchitectGameplayTag(FGameplayTag& InGameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitect_Character.AddAnimationArchitectGameplayTag"));
    struct Params_AddAnimationArchitectGameplayTag {
        FGameplayTag InGameplayTag; // 0x0
    }; // Size: 0x8
    Params_AddAnimationArchitectGameplayTag params{};
    params.InGameplayTag = (FGameplayTag)InGameplayTag;
    ProcessEvent(func, &params);
    InGameplayTag = params.InGameplayTag;
}
UAnimationArchitectComponent* AAnimationArchitect_Character::GetAnimationArchitectComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitect_Character.GetAnimationArchitectComponent"));
    struct Params_GetAnimationArchitectComponent {
        UAnimationArchitectComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnimationArchitectComponent params{};
    ProcessEvent(func, &params);
    return (UAnimationArchitectComponent*)params.ReturnValue;
}
void AAnimationArchitect_Character::AddInteractionArchitectGameplayTag(FGameplayTag& InGamepayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitect_Character.AddInteractionArchitectGameplayTag"));
    struct Params_AddInteractionArchitectGameplayTag {
        FGameplayTag InGamepayTag; // 0x0
    }; // Size: 0x8
    Params_AddInteractionArchitectGameplayTag params{};
    params.InGamepayTag = (FGameplayTag)InGamepayTag;
    ProcessEvent(func, &params);
    InGamepayTag = params.InGamepayTag;
}
void AAnimationArchitect_Character::FindArchitectAsset(FGameplayTagContainer& InAnimTagContainer, UObject*& OutAsset, bool bForceFirstOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitect_Character.FindArchitectAsset"));
    struct Params_FindArchitectAsset {
        FGameplayTagContainer InAnimTagContainer; // 0x0
        UObject* OutAsset; // 0x20
        bool bForceFirstOnly; // 0x28
    }; // Size: 0x29
    Params_FindArchitectAsset params{};
    params.InAnimTagContainer = (FGameplayTagContainer)InAnimTagContainer;
    params.OutAsset = (UObject*)OutAsset;
    params.bForceFirstOnly = (bool)bForceFirstOnly;
    ProcessEvent(func, &params);
    InAnimTagContainer = params.InAnimTagContainer;
    OutAsset = params.OutAsset;
}
bool AAnimationArchitect_Character::FindArchitectAssets(FGameplayTagContainer& InAnimTagContainer, TArray<UObject*>& Assets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitect_Character.FindArchitectAssets"));
    struct Params_FindArchitectAssets {
        FGameplayTagContainer InAnimTagContainer; // 0x0
        TArray<UObject*> Assets; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_FindArchitectAssets params{};
    params.InAnimTagContainer = (FGameplayTagContainer)InAnimTagContainer;
    params.Assets = (TArray<UObject*>)Assets;
    ProcessEvent(func, &params);
    InAnimTagContainer = params.InAnimTagContainer;
    Assets = params.Assets;
    return (bool)params.ReturnValue;
}
void AAnimationArchitect_Character::FindArchitectAssetFromMonolythicAsset(FGameplayTagContainer& InAssetTypeTagContainer, FGameplayTagContainer& InTagContainer, UObject*& OutAsset, bool bForceFirstOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitect_Character.FindArchitectAssetFromMonolythicAsset"));
    struct Params_FindArchitectAssetFromMonolythicAsset {
        FGameplayTagContainer InAssetTypeTagContainer; // 0x0
        FGameplayTagContainer InTagContainer; // 0x20
        UObject* OutAsset; // 0x40
        bool bForceFirstOnly; // 0x48
    }; // Size: 0x49
    Params_FindArchitectAssetFromMonolythicAsset params{};
    params.InAssetTypeTagContainer = (FGameplayTagContainer)InAssetTypeTagContainer;
    params.InTagContainer = (FGameplayTagContainer)InTagContainer;
    params.OutAsset = (UObject*)OutAsset;
    params.bForceFirstOnly = (bool)bForceFirstOnly;
    ProcessEvent(func, &params);
    InAssetTypeTagContainer = params.InAssetTypeTagContainer;
    InTagContainer = params.InTagContainer;
    OutAsset = params.OutAsset;
}
