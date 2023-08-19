#include "UFunction.hpp"
#include "UObject.hpp"
#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnPlayerCompanionProtection.hpp"
URPGAbilityEventListener_OnPlayerCompanionProtection* URPGAbilityEventListener_OnPlayerCompanionProtection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnPlayerCompanionProtection");
    return (URPGAbilityEventListener_OnPlayerCompanionProtection*)res;
}
void URPGAbilityEventListener_OnPlayerCompanionProtection::OnCastCompanionProtego(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityEventListener_OnPlayerCompanionProtection.OnCastCompanionProtego"));
    struct Params_OnCastCompanionProtego {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnCastCompanionProtego params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
