#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcRotateScratchpad.hpp"
UAblNpcRotateScratchpad* UAblNpcRotateScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcRotateScratchpad");
    return (UAblNpcRotateScratchpad*)res;
}
