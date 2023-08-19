#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcTargetingModifierScratchpad.hpp"
UAblNpcTargetingModifierScratchpad* UAblNpcTargetingModifierScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcTargetingModifierScratchpad");
    return (UAblNpcTargetingModifierScratchpad*)res;
}
