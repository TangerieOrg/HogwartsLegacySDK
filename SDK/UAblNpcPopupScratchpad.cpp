#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcPopupScratchpad.hpp"
UAblNpcPopupScratchpad* UAblNpcPopupScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcPopupScratchpad");
    return (UAblNpcPopupScratchpad*)res;
}
