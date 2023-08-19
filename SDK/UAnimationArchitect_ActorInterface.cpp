#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAnimationArchitectAsset.hpp"
#include "UAnimationArchitectComponent.hpp"
#include "UAnimationArchitect_ActorInterface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UObject.hpp"
void UAnimationArchitect_ActorInterface::AddAnimationArchitectGamplayTag(FGameplayTag& InGameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitect_ActorInterface.AddAnimationArchitectGamplayTag"));
    struct Params_AddAnimationArchitectGamplayTag {
        FGameplayTag InGameplayTag; // 0x0
    }; // Size: 0x8
    Params_AddAnimationArchitectGamplayTag params{};
    params.InGameplayTag = (FGameplayTag)InGameplayTag;
    ProcessEvent(func, &params);
    InGameplayTag = params.InGameplayTag;
}
void UAnimationArchitect_ActorInterface::FindArchitectAssetFromMonolythicAsset(FGameplayTagContainer& InAssetTypeTagContainer, FGameplayTagContainer& InTagContainer, UObject*& OutAsset, bool bForceFirstOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitect_ActorInterface.FindArchitectAssetFromMonolythicAsset"));
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
UAnimationArchitect_ActorInterface* UAnimationArchitect_ActorInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.AnimationArchitect_ActorInterface");
    return (UAnimationArchitect_ActorInterface*)res;
}
UAnimationArchitectComponent* UAnimationArchitect_ActorInterface::GetAnimationArchitectComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitect_ActorInterface.GetAnimationArchitectComponent"));
    struct Params_GetAnimationArchitectComponent {
        UAnimationArchitectComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnimationArchitectComponent params{};
    ProcessEvent(func, &params);
    return (UAnimationArchitectComponent*)params.ReturnValue;
}
void UAnimationArchitect_ActorInterface::AddAnimationArchitectAsset(UAnimationArchitectAsset* InArchitectAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitect_ActorInterface.AddAnimationArchitectAsset"));
    struct Params_AddAnimationArchitectAsset {
        UAnimationArchitectAsset* InArchitectAsset; // 0x0
    }; // Size: 0x8
    Params_AddAnimationArchitectAsset params{};
    params.InArchitectAsset = (UAnimationArchitectAsset*)InArchitectAsset;
    ProcessEvent(func, &params);
}
bool UAnimationArchitect_ActorInterface::FindArchitectAssets(FGameplayTagContainer& InTagContainer, TArray<UObject*>& Assets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitect_ActorInterface.FindArchitectAssets"));
    struct Params_FindArchitectAssets {
        FGameplayTagContainer InTagContainer; // 0x0
        TArray<UObject*> Assets; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_FindArchitectAssets params{};
    params.InTagContainer = (FGameplayTagContainer)InTagContainer;
    params.Assets = (TArray<UObject*>)Assets;
    ProcessEvent(func, &params);
    InTagContainer = params.InTagContainer;
    Assets = params.Assets;
    return (bool)params.ReturnValue;
}
void UAnimationArchitect_ActorInterface::FindSceneRigAsset(FGameplayTagContainer& InAnimTagContainer, UObject*& OutSceneRig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitect_ActorInterface.FindSceneRigAsset"));
    struct Params_FindSceneRigAsset {
        FGameplayTagContainer InAnimTagContainer; // 0x0
        UObject* OutSceneRig; // 0x20
    }; // Size: 0x28
    Params_FindSceneRigAsset params{};
    params.InAnimTagContainer = (FGameplayTagContainer)InAnimTagContainer;
    params.OutSceneRig = (UObject*)OutSceneRig;
    ProcessEvent(func, &params);
    InAnimTagContainer = params.InAnimTagContainer;
    OutSceneRig = params.OutSceneRig;
}
void UAnimationArchitect_ActorInterface::FindArchitectAsset(FGameplayTagContainer& InAnimTagContainer, UObject*& OutAsset, bool bForceFirstOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitect_ActorInterface.FindArchitectAsset"));
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
