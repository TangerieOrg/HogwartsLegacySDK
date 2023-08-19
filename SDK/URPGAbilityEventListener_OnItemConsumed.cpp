#include "FItemFilter.hpp"
#include "UFunction.hpp"
#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnItemConsumed.hpp"
URPGAbilityEventListener_OnItemConsumed* URPGAbilityEventListener_OnItemConsumed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnItemConsumed");
    return (URPGAbilityEventListener_OnItemConsumed*)res;
}
void URPGAbilityEventListener_OnItemConsumed::OnItemConsumed(FName CharacterID, FName ItemId, FName Variation, FName ItemType, FName ItemUsageType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityEventListener_OnItemConsumed.OnItemConsumed"));
    struct Params_OnItemConsumed {
        FName CharacterID; // 0x0
        FName ItemId; // 0x8
        FName Variation; // 0x10
        FName ItemType; // 0x18
        FName ItemUsageType; // 0x20
    }; // Size: 0x28
    Params_OnItemConsumed params{};
    params.CharacterID = (FName)CharacterID;
    params.ItemId = (FName)ItemId;
    params.Variation = (FName)Variation;
    params.ItemType = (FName)ItemType;
    params.ItemUsageType = (FName)ItemUsageType;
    ProcessEvent(func, &params);
}
