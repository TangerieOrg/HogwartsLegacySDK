#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblPlayAbilityByChannelScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblPlayAbilityByChannelScratchpad* UAblPlayAbilityByChannelScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblPlayAbilityByChannelScratchpad");
    return (UAblPlayAbilityByChannelScratchpad*)res;
}
