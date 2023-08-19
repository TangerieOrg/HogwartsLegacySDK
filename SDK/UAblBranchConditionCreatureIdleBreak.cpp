#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionCreatureIdleBreak.hpp"
UAblBranchConditionCreatureIdleBreak* UAblBranchConditionCreatureIdleBreak::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionCreatureIdleBreak");
    return (UAblBranchConditionCreatureIdleBreak*)res;
}
