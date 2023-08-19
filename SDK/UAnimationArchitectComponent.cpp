#include "ArchitectType.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
#include "UAnimationArchitectAsset.hpp"
#include "UAnimationArchitectComponent.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#include "UFunction.hpp"
#include "UObjectArchitectAsset.hpp"
#include "UStationArchitectAsset.hpp"
void UAnimationArchitectComponent::RemoveInteractionArchitectGameplayTag(FGameplayTag& InGameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitectComponent.RemoveInteractionArchitectGameplayTag"));
    struct Params_RemoveInteractionArchitectGameplayTag {
        FGameplayTag InGameplayTag; // 0x0
    }; // Size: 0x8
    Params_RemoveInteractionArchitectGameplayTag params{};
    params.InGameplayTag = (FGameplayTag)InGameplayTag;
    ProcessEvent(func, &params);
    InGameplayTag = params.InGameplayTag;
}
UAnimationArchitectComponent* UAnimationArchitectComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.AnimationArchitectComponent");
    return (UAnimationArchitectComponent*)res;
}
void UAnimationArchitectComponent::AddAnimationArchitectPersistentGameplayTags(FGameplayTagContainer& InGameplayTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitectComponent.AddAnimationArchitectPersistentGameplayTags"));
    struct Params_AddAnimationArchitectPersistentGameplayTags {
        FGameplayTagContainer InGameplayTags; // 0x0
    }; // Size: 0x20
    Params_AddAnimationArchitectPersistentGameplayTags params{};
    params.InGameplayTags = (FGameplayTagContainer)InGameplayTags;
    ProcessEvent(func, &params);
    InGameplayTags = params.InGameplayTags;
}
bool UAnimationArchitectComponent::InteractionArchitectTagContainerHasAny(FGameplayTagContainer& InGameplayTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitectComponent.InteractionArchitectTagContainerHasAny"));
    struct Params_InteractionArchitectTagContainerHasAny {
        FGameplayTagContainer InGameplayTagContainer; // 0x0
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_InteractionArchitectTagContainerHasAny params{};
    params.InGameplayTagContainer = (FGameplayTagContainer)InGameplayTagContainer;
    ProcessEvent(func, &params);
    InGameplayTagContainer = params.InGameplayTagContainer;
    return (bool)params.ReturnValue;
}
void UAnimationArchitectComponent::RemoveObjectArchitectGameplayTag(FGameplayTag& InGameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitectComponent.RemoveObjectArchitectGameplayTag"));
    struct Params_RemoveObjectArchitectGameplayTag {
        FGameplayTag InGameplayTag; // 0x0
    }; // Size: 0x8
    Params_RemoveObjectArchitectGameplayTag params{};
    params.InGameplayTag = (FGameplayTag)InGameplayTag;
    ProcessEvent(func, &params);
    InGameplayTag = params.InGameplayTag;
}
void UAnimationArchitectComponent::RemoveAnimationArchitectGameplayTag(FGameplayTag& InGameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitectComponent.RemoveAnimationArchitectGameplayTag"));
    struct Params_RemoveAnimationArchitectGameplayTag {
        FGameplayTag InGameplayTag; // 0x0
    }; // Size: 0x8
    Params_RemoveAnimationArchitectGameplayTag params{};
    params.InGameplayTag = (FGameplayTag)InGameplayTag;
    ProcessEvent(func, &params);
    InGameplayTag = params.InGameplayTag;
}
bool UAnimationArchitectComponent::InteractionArchitectTagContainerHasTag(FGameplayTag& InGameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitectComponent.InteractionArchitectTagContainerHasTag"));
    struct Params_InteractionArchitectTagContainerHasTag {
        FGameplayTag InGameplayTag; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_InteractionArchitectTagContainerHasTag params{};
    params.InGameplayTag = (FGameplayTag)InGameplayTag;
    ProcessEvent(func, &params);
    InGameplayTag = params.InGameplayTag;
    return (bool)params.ReturnValue;
}
void UAnimationArchitectComponent::AddObjectArchitectGameplayTag(FGameplayTag& InGameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitectComponent.AddObjectArchitectGameplayTag"));
    struct Params_AddObjectArchitectGameplayTag {
        FGameplayTag InGameplayTag; // 0x0
    }; // Size: 0x8
    Params_AddObjectArchitectGameplayTag params{};
    params.InGameplayTag = (FGameplayTag)InGameplayTag;
    ProcessEvent(func, &params);
    InGameplayTag = params.InGameplayTag;
}
void UAnimationArchitectComponent::AddInteractionArchitectPersistentGameplayTags(FGameplayTagContainer& InGameplayTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitectComponent.AddInteractionArchitectPersistentGameplayTags"));
    struct Params_AddInteractionArchitectPersistentGameplayTags {
        FGameplayTagContainer InGameplayTags; // 0x0
    }; // Size: 0x20
    Params_AddInteractionArchitectPersistentGameplayTags params{};
    params.InGameplayTags = (FGameplayTagContainer)InGameplayTags;
    ProcessEvent(func, &params);
    InGameplayTags = params.InGameplayTags;
}
void UAnimationArchitectComponent::AddInteractionArchitectGameplayTag(FGameplayTag& InGameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitectComponent.AddInteractionArchitectGameplayTag"));
    struct Params_AddInteractionArchitectGameplayTag {
        FGameplayTag InGameplayTag; // 0x0
    }; // Size: 0x8
    Params_AddInteractionArchitectGameplayTag params{};
    params.InGameplayTag = (FGameplayTag)InGameplayTag;
    ProcessEvent(func, &params);
    InGameplayTag = params.InGameplayTag;
}
void UAnimationArchitectComponent::AddAnimationArchitectGameplayTag(FGameplayTag& InGameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.AnimationArchitectComponent.AddAnimationArchitectGameplayTag"));
    struct Params_AddAnimationArchitectGameplayTag {
        FGameplayTag InGameplayTag; // 0x0
    }; // Size: 0x8
    Params_AddAnimationArchitectGameplayTag params{};
    params.InGameplayTag = (FGameplayTag)InGameplayTag;
    ProcessEvent(func, &params);
    InGameplayTag = params.InGameplayTag;
}
