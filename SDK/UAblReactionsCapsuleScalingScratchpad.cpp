#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblReactionsCapsuleScalingScratchpad.hpp"
UAblReactionsCapsuleScalingScratchpad* UAblReactionsCapsuleScalingScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblReactionsCapsuleScalingScratchpad");
    return (UAblReactionsCapsuleScalingScratchpad*)res;
}
