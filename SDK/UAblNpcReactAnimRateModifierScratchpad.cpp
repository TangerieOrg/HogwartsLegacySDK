#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcReactAnimRateModifierScratchpad.hpp"
UAblNpcReactAnimRateModifierScratchpad* UAblNpcReactAnimRateModifierScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcReactAnimRateModifierScratchpad");
    return (UAblNpcReactAnimRateModifierScratchpad*)res;
}
