#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcScaleScratchpad.hpp"
UAblNpcScaleScratchpad* UAblNpcScaleScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcScaleScratchpad");
    return (UAblNpcScaleScratchpad*)res;
}
