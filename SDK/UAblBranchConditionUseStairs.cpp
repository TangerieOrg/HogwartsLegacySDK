#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionUseStairs.hpp"
UAblBranchConditionUseStairs* UAblBranchConditionUseStairs::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionUseStairs");
    return (UAblBranchConditionUseStairs*)res;
}
