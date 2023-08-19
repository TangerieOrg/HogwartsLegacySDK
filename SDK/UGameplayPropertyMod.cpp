#include "EModExternalInputMethod.hpp"
#include "FGameplayTag.hpp"
#include "FModTarget.hpp"
#include "FSelectableName.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UGameplayPropertyMod.hpp"
#include "UModExtension.hpp"
#include "UModFilter.hpp"
#include "UObject.hpp"
UGameplayPropertyMod* UGameplayPropertyMod::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayMods.GameplayPropertyMod");
    return (UGameplayPropertyMod*)res;
}
void UGameplayPropertyMod::OnModRemoved_BP(UObject* InTargetObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayPropertyMod.OnModRemoved_BP"));
    struct Params_OnModRemoved_BP {
        UObject* InTargetObject; // 0x0
    }; // Size: 0x8
    Params_OnModRemoved_BP params{};
    params.InTargetObject = (UObject*)InTargetObject;
    ProcessEvent(func, &params);
}
void UGameplayPropertyMod::OnModAdded_BP(UObject* InTargetObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayPropertyMod.OnModAdded_BP"));
    struct Params_OnModAdded_BP {
        UObject* InTargetObject; // 0x0
    }; // Size: 0x8
    Params_OnModAdded_BP params{};
    params.InTargetObject = (UObject*)InTargetObject;
    ProcessEvent(func, &params);
}
void UGameplayPropertyMod::OnModApplied_BP(UObject* InTargetObject, bool bFirstTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayPropertyMod.OnModApplied_BP"));
    struct Params_OnModApplied_BP {
        UObject* InTargetObject; // 0x0
        bool bFirstTime; // 0x8
    }; // Size: 0x9
    Params_OnModApplied_BP params{};
    params.InTargetObject = (UObject*)InTargetObject;
    params.bFirstTime = (bool)bFirstTime;
    ProcessEvent(func, &params);
}
