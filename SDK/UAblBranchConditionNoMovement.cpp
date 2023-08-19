#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionNoMovement.hpp"
UAblBranchConditionNoMovement* UAblBranchConditionNoMovement::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionNoMovement");
    return (UAblBranchConditionNoMovement*)res;
}
