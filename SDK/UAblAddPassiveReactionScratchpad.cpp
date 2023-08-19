#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblAddPassiveReactionScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblAddPassiveReactionScratchpad* UAblAddPassiveReactionScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAddPassiveReactionScratchpad");
    return (UAblAddPassiveReactionScratchpad*)res;
}
