#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionIdleTimeElapsed.hpp"
UAblBranchConditionIdleTimeElapsed* UAblBranchConditionIdleTimeElapsed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionIdleTimeElapsed");
    return (UAblBranchConditionIdleTimeElapsed*)res;
}
