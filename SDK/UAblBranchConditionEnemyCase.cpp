#include "EAbilityTaskScratchPadCondition.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionEnemyCase.hpp"
UAblBranchConditionEnemyCase* UAblBranchConditionEnemyCase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionEnemyCase");
    return (UAblBranchConditionEnemyCase*)res;
}
