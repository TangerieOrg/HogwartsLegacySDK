#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionFlying.hpp"
UAblBranchConditionFlying* UAblBranchConditionFlying::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionFlying");
    return (UAblBranchConditionFlying*)res;
}
