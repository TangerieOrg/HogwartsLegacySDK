#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcMoveInDirectionScratchpad.hpp"
UAblNpcMoveInDirectionScratchpad* UAblNpcMoveInDirectionScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcMoveInDirectionScratchpad");
    return (UAblNpcMoveInDirectionScratchpad*)res;
}
