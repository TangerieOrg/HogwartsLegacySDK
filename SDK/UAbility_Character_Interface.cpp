#include "UAbility_Character_Interface.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UAbility_Character_Interface* UAbility_Character_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Ability_Character_Interface");
    return (UAbility_Character_Interface*)res;
}
void UAbility_Character_Interface::StopCustomAbility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Ability_Character_Interface.StopCustomAbility"));
    struct Params_StopCustomAbility {
    }; // Size: 0x0
    Params_StopCustomAbility params{};
    ProcessEvent(func, &params);
}
void UAbility_Character_Interface::PlayCustomAbility(UClass* InAbility, bool bPreventReactions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Ability_Character_Interface.PlayCustomAbility"));
    struct Params_PlayCustomAbility {
        UClass* InAbility; // 0x0
        bool bPreventReactions; // 0x8
    }; // Size: 0x9
    Params_PlayCustomAbility params{};
    params.InAbility = (UClass*)InAbility;
    params.bPreventReactions = (bool)bPreventReactions;
    ProcessEvent(func, &params);
}
