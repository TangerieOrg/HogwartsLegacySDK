#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionReactionEnded.hpp"
UAblBranchConditionReactionEnded* UAblBranchConditionReactionEnded::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionReactionEnded");
    return (UAblBranchConditionReactionEnded*)res;
}
