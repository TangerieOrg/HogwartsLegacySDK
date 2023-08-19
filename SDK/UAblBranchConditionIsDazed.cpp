#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionIsDazed.hpp"
UAblBranchConditionIsDazed* UAblBranchConditionIsDazed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionIsDazed");
    return (UAblBranchConditionIsDazed*)res;
}
