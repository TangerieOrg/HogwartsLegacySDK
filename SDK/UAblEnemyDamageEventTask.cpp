#include "UAblDamageEventTask.hpp"
#include "UAblEnemyDamageEventTask.hpp"
UAblEnemyDamageEventTask* UAblEnemyDamageEventTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblEnemyDamageEventTask");
    return (UAblEnemyDamageEventTask*)res;
}
