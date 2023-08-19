#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionTimer.hpp"
UAblBranchConditionTimer* UAblBranchConditionTimer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionTimer");
    return (UAblBranchConditionTimer*)res;
}
