#include "UAblBranchConditionVelocity_New.hpp"
#include "UAblTaskCondition.hpp"
UAblBranchConditionVelocity_New* UAblBranchConditionVelocity_New::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionVelocity_New");
    return (UAblBranchConditionVelocity_New*)res;
}
