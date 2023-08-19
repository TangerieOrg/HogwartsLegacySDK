#include "UEnemy_SpawnSpiders.hpp"
#include "UExecuteTask.hpp"
#include "USpider_SpawnAttack_ExecuteTask.hpp"
USpider_SpawnAttack_ExecuteTask* USpider_SpawnAttack_ExecuteTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Spider_SpawnAttack_ExecuteTask");
    return (USpider_SpawnAttack_ExecuteTask*)res;
}
