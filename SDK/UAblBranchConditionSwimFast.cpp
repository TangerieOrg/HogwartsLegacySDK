#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionSwimFast.hpp"
UAblBranchConditionSwimFast* UAblBranchConditionSwimFast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionSwimFast");
    return (UAblBranchConditionSwimFast*)res;
}
