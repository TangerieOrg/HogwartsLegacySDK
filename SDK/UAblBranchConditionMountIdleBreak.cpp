#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionMountIdleBreak.hpp"
UAblBranchConditionMountIdleBreak* UAblBranchConditionMountIdleBreak::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionMountIdleBreak");
    return (UAblBranchConditionMountIdleBreak*)res;
}
