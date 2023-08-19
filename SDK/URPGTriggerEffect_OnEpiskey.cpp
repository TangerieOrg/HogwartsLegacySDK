#include "AActor.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_OnEpiskey.hpp"
URPGTriggerEffect_OnEpiskey* URPGTriggerEffect_OnEpiskey::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_OnEpiskey");
    return (URPGTriggerEffect_OnEpiskey*)res;
}
void URPGTriggerEffect_OnEpiskey::OnHealing(UObject* i_caller, float InHealthChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGTriggerEffect_OnEpiskey.OnHealing"));
    struct Params_OnHealing {
        UObject* i_caller; // 0x0
        float InHealthChange; // 0x8
    }; // Size: 0xc
    Params_OnHealing params{};
    params.i_caller = (UObject*)i_caller;
    params.InHealthChange = (float)InHealthChange;
    ProcessEvent(func, &params);
}
