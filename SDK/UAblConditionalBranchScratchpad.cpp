#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblConditionalBranchScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblConditionalBranchScratchpad* UAblConditionalBranchScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblConditionalBranchScratchpad");
    return (UAblConditionalBranchScratchpad*)res;
}
