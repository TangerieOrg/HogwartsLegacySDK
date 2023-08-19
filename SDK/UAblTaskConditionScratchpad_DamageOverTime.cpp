#include "UAblTaskConditionScratchpad.hpp"
#include "UAblTaskConditionScratchpad_DamageOverTime.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
UAblTaskConditionScratchpad_DamageOverTime* UAblTaskConditionScratchpad_DamageOverTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTaskConditionScratchpad_DamageOverTime");
    return (UAblTaskConditionScratchpad_DamageOverTime*)res;
}
void UAblTaskConditionScratchpad_DamageOverTime::OnDoT_End(UActorComponent* ActorComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AblTaskConditionScratchpad_DamageOverTime.OnDoT_End"));
    struct Params_OnDoT_End {
        UActorComponent* ActorComp; // 0x0
    }; // Size: 0x8
    Params_OnDoT_End params{};
    params.ActorComp = (UActorComponent*)ActorComp;
    ProcessEvent(func, &params);
}
