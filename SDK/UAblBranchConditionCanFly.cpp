#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionCanFly.hpp"
UAblBranchConditionCanFly* UAblBranchConditionCanFly::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionCanFly");
    return (UAblBranchConditionCanFly*)res;
}
