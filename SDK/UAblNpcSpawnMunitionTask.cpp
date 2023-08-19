#include "UAblAbilityTask.hpp"
#include "UAblNpcSpawnMunitionTask.hpp"
#include "UAblTaskCondition.hpp"
#include "UClass.hpp"
UAblNpcSpawnMunitionTask* UAblNpcSpawnMunitionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcSpawnMunitionTask");
    return (UAblNpcSpawnMunitionTask*)res;
}
