#include "AActor.hpp"
#include "ATool.hpp"
#include "AWorldObject.hpp"
#include "UAblTaskConditionScratchpad.hpp"
#include "UAblTaskConditionScratchpad_OppugnoProxy.hpp"
#include "UFunction.hpp"
void UAblTaskConditionScratchpad_OppugnoProxy::OnActiveSpellToolChanged(ATool* ActivatedSpell, ATool* DeactivatedSpell) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AblTaskConditionScratchpad_OppugnoProxy.OnActiveSpellToolChanged"));
    struct Params_OnActiveSpellToolChanged {
        ATool* ActivatedSpell; // 0x0
        ATool* DeactivatedSpell; // 0x8
    }; // Size: 0x10
    Params_OnActiveSpellToolChanged params{};
    params.ActivatedSpell = (ATool*)ActivatedSpell;
    params.DeactivatedSpell = (ATool*)DeactivatedSpell;
    ProcessEvent(func, &params);
}
UAblTaskConditionScratchpad_OppugnoProxy* UAblTaskConditionScratchpad_OppugnoProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTaskConditionScratchpad_OppugnoProxy");
    return (UAblTaskConditionScratchpad_OppugnoProxy*)res;
}
