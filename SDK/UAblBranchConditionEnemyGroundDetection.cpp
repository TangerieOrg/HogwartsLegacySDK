#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionEnemyGroundDetection.hpp"
UAblBranchConditionEnemyGroundDetection* UAblBranchConditionEnemyGroundDetection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionEnemyGroundDetection");
    return (UAblBranchConditionEnemyGroundDetection*)res;
}
