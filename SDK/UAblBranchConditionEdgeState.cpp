#include "EEdgeState\Type.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionEdgeState.hpp"
UAblBranchConditionEdgeState* UAblBranchConditionEdgeState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionEdgeState");
    return (UAblBranchConditionEdgeState*)res;
}
