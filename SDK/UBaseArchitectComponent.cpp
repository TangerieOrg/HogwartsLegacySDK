#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#include "UBaseArchitectComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBaseArchitectComponent* UBaseArchitectComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.BaseArchitectComponent");
    return (UBaseArchitectComponent*)res;
}
void UBaseArchitectComponent::RemoveGameplayTag(FGameplayTag& InGameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.BaseArchitectComponent.RemoveGameplayTag"));
    struct Params_RemoveGameplayTag {
        FGameplayTag InGameplayTag; // 0x0
    }; // Size: 0x8
    Params_RemoveGameplayTag params{};
    params.InGameplayTag = (FGameplayTag)InGameplayTag;
    ProcessEvent(func, &params);
    InGameplayTag = params.InGameplayTag;
}
bool UBaseArchitectComponent::GameplayTagContainerHasTag(FGameplayTag& InGameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.BaseArchitectComponent.GameplayTagContainerHasTag"));
    struct Params_GameplayTagContainerHasTag {
        FGameplayTag InGameplayTag; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GameplayTagContainerHasTag params{};
    params.InGameplayTag = (FGameplayTag)InGameplayTag;
    ProcessEvent(func, &params);
    InGameplayTag = params.InGameplayTag;
    return (bool)params.ReturnValue;
}
void UBaseArchitectComponent::AddGameplayTag(FGameplayTag& InGameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.BaseArchitectComponent.AddGameplayTag"));
    struct Params_AddGameplayTag {
        FGameplayTag InGameplayTag; // 0x0
    }; // Size: 0x8
    Params_AddGameplayTag params{};
    params.InGameplayTag = (FGameplayTag)InGameplayTag;
    ProcessEvent(func, &params);
    InGameplayTag = params.InGameplayTag;
}
