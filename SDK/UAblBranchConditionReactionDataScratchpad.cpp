#include "UAblBranchConditionReactionDataScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblBranchConditionReactionDataScratchpad* UAblBranchConditionReactionDataScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionReactionDataScratchpad");
    return (UAblBranchConditionReactionDataScratchpad*)res;
}
