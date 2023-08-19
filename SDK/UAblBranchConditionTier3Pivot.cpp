#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionTier3Pivot.hpp"
UAblBranchConditionTier3Pivot* UAblBranchConditionTier3Pivot::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionTier3Pivot");
    return (UAblBranchConditionTier3Pivot*)res;
}
