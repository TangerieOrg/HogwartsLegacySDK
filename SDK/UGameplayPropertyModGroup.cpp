#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UGameplayPropertyMod.hpp"
#include "UGameplayPropertyModGroup.hpp"
#include "UObject.hpp"
UGameplayPropertyModGroup* UGameplayPropertyModGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayMods.GameplayPropertyModGroup");
    return (UGameplayPropertyModGroup*)res;
}
void UGameplayPropertyModGroup::OnRemoved(UObject* TargetObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayPropertyModGroup.OnRemoved"));
    struct Params_OnRemoved {
        UObject* TargetObject; // 0x0
    }; // Size: 0x8
    Params_OnRemoved params{};
    params.TargetObject = (UObject*)TargetObject;
    ProcessEvent(func, &params);
}
void UGameplayPropertyModGroup::OnAdded(UObject* TargetObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayPropertyModGroup.OnAdded"));
    struct Params_OnAdded {
        UObject* TargetObject; // 0x0
    }; // Size: 0x8
    Params_OnAdded params{};
    params.TargetObject = (UObject*)TargetObject;
    ProcessEvent(func, &params);
}
