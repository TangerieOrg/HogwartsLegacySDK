#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblPlayObjectArchitectVfxScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
#include "UNiagaraComponent.hpp"
#include "UParticleSystemComponent.hpp"
UAblPlayObjectArchitectVfxScratchpad* UAblPlayObjectArchitectVfxScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPlayObjectArchitectVfxScratchpad");
    return (UAblPlayObjectArchitectVfxScratchpad*)res;
}
