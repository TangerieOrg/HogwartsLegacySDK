#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionVelocity.hpp"
UAblBranchConditionVelocity* UAblBranchConditionVelocity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionVelocity");
    return (UAblBranchConditionVelocity*)res;
}
