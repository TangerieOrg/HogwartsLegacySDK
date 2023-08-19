#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionEnemyPhysics.hpp"
UAblBranchConditionEnemyPhysics* UAblBranchConditionEnemyPhysics::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionEnemyPhysics");
    return (UAblBranchConditionEnemyPhysics*)res;
}
