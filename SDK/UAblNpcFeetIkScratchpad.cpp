#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcFeetIkScratchpad.hpp"
UAblNpcFeetIkScratchpad* UAblNpcFeetIkScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcFeetIkScratchpad");
    return (UAblNpcFeetIkScratchpad*)res;
}
