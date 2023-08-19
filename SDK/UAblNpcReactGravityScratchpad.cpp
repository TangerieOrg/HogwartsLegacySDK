#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcReactGravityScratchpad.hpp"
UAblNpcReactGravityScratchpad* UAblNpcReactGravityScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcReactGravityScratchpad");
    return (UAblNpcReactGravityScratchpad*)res;
}
