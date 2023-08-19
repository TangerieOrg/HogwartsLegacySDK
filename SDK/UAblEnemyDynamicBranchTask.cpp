#include "EEnemy_Ability.hpp"
#include "UAblBranchTask.hpp"
#include "UAblEnemyDynamicBranchTask.hpp"
UAblEnemyDynamicBranchTask* UAblEnemyDynamicBranchTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblEnemyDynamicBranchTask");
    return (UAblEnemyDynamicBranchTask*)res;
}
