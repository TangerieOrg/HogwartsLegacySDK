#include "FGameplayTagContainer.hpp"
#include "FInteractionArchitectAsset_Connection.hpp"
#include "UBaseArchitectAsset.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
UInteractionArchitectAsset* UInteractionArchitectAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.InteractionArchitectAsset");
    return (UInteractionArchitectAsset*)res;
}
TArray<UClass*> UInteractionArchitectAsset::K2_FindAbilityConnectionArray(FGameplayTagContainer& InSourceTagContainer, TArray<UInteractionArchitectAsset*>& InTargetAssets, TArray<FGameplayTagContainer>& InTargetTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.InteractionArchitectAsset.K2_FindAbilityConnectionArray"));
    struct Params_K2_FindAbilityConnectionArray {
        FGameplayTagContainer InSourceTagContainer; // 0x0
        TArray<UInteractionArchitectAsset*> InTargetAssets; // 0x20
        TArray<FGameplayTagContainer> InTargetTags; // 0x30
        TArray<UClass*> ReturnValue; // 0x40
    }; // Size: 0x50
    Params_K2_FindAbilityConnectionArray params{};
    params.InSourceTagContainer = (FGameplayTagContainer)InSourceTagContainer;
    params.InTargetAssets = (TArray<UInteractionArchitectAsset*>)InTargetAssets;
    params.InTargetTags = (TArray<FGameplayTagContainer>)InTargetTags;
    ProcessEvent(func, &params);
    InTargetTags = params.InTargetTags;
    InSourceTagContainer = params.InSourceTagContainer;
    InTargetAssets = params.InTargetAssets;
    return (TArray<UClass*>)params.ReturnValue;
}
