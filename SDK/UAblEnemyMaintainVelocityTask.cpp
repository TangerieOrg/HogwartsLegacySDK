#include "UAblAbilityTask.hpp"
#include "UAblEnemyMaintainVelocityTask.hpp"
UAblEnemyMaintainVelocityTask* UAblEnemyMaintainVelocityTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblEnemyMaintainVelocityTask");
    return (UAblEnemyMaintainVelocityTask*)res;
}
