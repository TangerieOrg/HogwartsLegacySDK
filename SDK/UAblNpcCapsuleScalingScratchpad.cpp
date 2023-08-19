#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcCapsuleScalingScratchpad.hpp"
UAblNpcCapsuleScalingScratchpad* UAblNpcCapsuleScalingScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcCapsuleScalingScratchpad");
    return (UAblNpcCapsuleScalingScratchpad*)res;
}
