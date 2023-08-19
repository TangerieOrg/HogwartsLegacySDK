#include "AActor.hpp"
#include "FDateTime.hpp"
#include "FRPGUIInfo.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URPGAbilityBase.hpp"
URPGAbilityBase* URPGAbilityBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityBase");
    return (URPGAbilityBase*)res;
}
void URPGAbilityBase::OnReequipped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityBase.OnReequipped"));
    struct Params_OnReequipped {
    }; // Size: 0x0
    Params_OnReequipped params{};
    ProcessEvent(func, &params);
}
void URPGAbilityBase::OnUnequipped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityBase.OnUnequipped"));
    struct Params_OnUnequipped {
    }; // Size: 0x0
    Params_OnUnequipped params{};
    ProcessEvent(func, &params);
}
void URPGAbilityBase::OnEquipped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityBase.OnEquipped"));
    struct Params_OnEquipped {
    }; // Size: 0x0
    Params_OnEquipped params{};
    ProcessEvent(func, &params);
}
