#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionIsMovement.hpp"
UAblBranchConditionIsMovement* UAblBranchConditionIsMovement::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionIsMovement");
    return (UAblBranchConditionIsMovement*)res;
}
