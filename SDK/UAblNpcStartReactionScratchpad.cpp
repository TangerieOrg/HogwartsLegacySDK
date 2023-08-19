#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcStartReactionScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblNpcStartReactionScratchpad* UAblNpcStartReactionScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcStartReactionScratchpad");
    return (UAblNpcStartReactionScratchpad*)res;
}
