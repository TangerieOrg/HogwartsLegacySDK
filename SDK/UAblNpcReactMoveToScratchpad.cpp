#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcReactMoveToScratchpad.hpp"
UAblNpcReactMoveToScratchpad* UAblNpcReactMoveToScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcReactMoveToScratchpad");
    return (UAblNpcReactMoveToScratchpad*)res;
}
