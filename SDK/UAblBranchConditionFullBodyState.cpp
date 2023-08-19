#include "EFullBodyState\Type.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionFullBodyState.hpp"
UAblBranchConditionFullBodyState* UAblBranchConditionFullBodyState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionFullBodyState");
    return (UAblBranchConditionFullBodyState*)res;
}
