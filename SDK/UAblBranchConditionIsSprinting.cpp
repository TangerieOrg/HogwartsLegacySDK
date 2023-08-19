#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionIsSprinting.hpp"
UAblBranchConditionIsSprinting* UAblBranchConditionIsSprinting::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionIsSprinting");
    return (UAblBranchConditionIsSprinting*)res;
}
