#include "EMovementMode.hpp"
#include "UAblBranchConditionMovementMode.hpp"
#include "UAblTaskCondition.hpp"
UAblBranchConditionMovementMode* UAblBranchConditionMovementMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionMovementMode");
    return (UAblBranchConditionMovementMode*)res;
}
