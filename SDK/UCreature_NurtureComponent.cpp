#include "ACreature_Character.hpp"
#include "ESocialCombatMode.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UCreatureVariationDataAsset.hpp"
#include "UCreature_NurtureComponent.hpp"
#include "UFunction.hpp"
#include "UObjectArchitectAsset.hpp"
UCreature_NurtureComponent* UCreature_NurtureComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_NurtureComponent");
    return (UCreature_NurtureComponent*)res;
}
bool UCreature_NurtureComponent::GetIsMale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_NurtureComponent.GetIsMale"));
    struct Params_GetIsMale {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsMale params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreature_NurtureComponent::GetIsAlbino() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_NurtureComponent.GetIsAlbino"));
    struct Params_GetIsAlbino {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsAlbino params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
