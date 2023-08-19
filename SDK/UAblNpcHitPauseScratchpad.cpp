#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcHitPauseScratchpad.hpp"
UAblNpcHitPauseScratchpad* UAblNpcHitPauseScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcHitPauseScratchpad");
    return (UAblNpcHitPauseScratchpad*)res;
}
