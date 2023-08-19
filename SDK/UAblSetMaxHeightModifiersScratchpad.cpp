#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblSetMaxHeightModifiersScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblSetMaxHeightModifiersScratchpad* UAblSetMaxHeightModifiersScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetMaxHeightModifiersScratchpad");
    return (UAblSetMaxHeightModifiersScratchpad*)res;
}
