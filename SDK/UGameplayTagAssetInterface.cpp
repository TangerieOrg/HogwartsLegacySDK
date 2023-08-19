#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UFunction.hpp"
#include "UGameplayTagAssetInterface.hpp"
#include "UInterface.hpp"
bool UGameplayTagAssetInterface::HasMatchingGameplayTag(FGameplayTag TagToCheck) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag"));
    struct Params_HasMatchingGameplayTag {
        FGameplayTag TagToCheck; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasMatchingGameplayTag params{};
    params.TagToCheck = (FGameplayTag)TagToCheck;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UGameplayTagAssetInterface* UGameplayTagAssetInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTags.GameplayTagAssetInterface");
    return (UGameplayTagAssetInterface*)res;
}
void UGameplayTagAssetInterface::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags"));
    struct Params_GetOwnedGameplayTags {
        FGameplayTagContainer TagContainer; // 0x0
    }; // Size: 0x20
    Params_GetOwnedGameplayTags params{};
    params.TagContainer = (FGameplayTagContainer)TagContainer;
    ProcessEvent(func, &params);
    TagContainer = params.TagContainer;
}
bool UGameplayTagAssetInterface::HasAnyMatchingGameplayTags(FGameplayTagContainer& TagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags"));
    struct Params_HasAnyMatchingGameplayTags {
        FGameplayTagContainer TagContainer; // 0x0
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_HasAnyMatchingGameplayTags params{};
    params.TagContainer = (FGameplayTagContainer)TagContainer;
    ProcessEvent(func, &params);
    TagContainer = params.TagContainer;
    return (bool)params.ReturnValue;
}
bool UGameplayTagAssetInterface::HasAllMatchingGameplayTags(FGameplayTagContainer& TagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags"));
    struct Params_HasAllMatchingGameplayTags {
        FGameplayTagContainer TagContainer; // 0x0
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_HasAllMatchingGameplayTags params{};
    params.TagContainer = (FGameplayTagContainer)TagContainer;
    ProcessEvent(func, &params);
    TagContainer = params.TagContainer;
    return (bool)params.ReturnValue;
}
