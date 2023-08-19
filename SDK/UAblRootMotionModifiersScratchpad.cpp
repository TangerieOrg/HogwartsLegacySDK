#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblRootMotionModifiersScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblRootMotionModifiersScratchpad* UAblRootMotionModifiersScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblRootMotionModifiersScratchpad");
    return (UAblRootMotionModifiersScratchpad*)res;
}
