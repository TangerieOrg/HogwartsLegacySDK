#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcCollisionScratchpad.hpp"
UAblNpcCollisionScratchpad* UAblNpcCollisionScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcCollisionScratchpad");
    return (UAblNpcCollisionScratchpad*)res;
}
