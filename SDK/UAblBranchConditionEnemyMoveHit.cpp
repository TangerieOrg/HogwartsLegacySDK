#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionEnemyMoveHit.hpp"
UAblBranchConditionEnemyMoveHit* UAblBranchConditionEnemyMoveHit::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionEnemyMoveHit");
    return (UAblBranchConditionEnemyMoveHit*)res;
}
