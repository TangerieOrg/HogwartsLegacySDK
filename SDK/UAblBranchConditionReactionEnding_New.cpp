#include "UAblBranchConditionReactionEnding_New.hpp"
#include "UAblTaskCondition.hpp"
UAblBranchConditionReactionEnding_New* UAblBranchConditionReactionEnding_New::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionReactionEnding_New");
    return (UAblBranchConditionReactionEnding_New*)res;
}
