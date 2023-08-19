#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionInCombatMode.hpp"
UAblBranchConditionInCombatMode* UAblBranchConditionInCombatMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionInCombatMode");
    return (UAblBranchConditionInCombatMode*)res;
}
