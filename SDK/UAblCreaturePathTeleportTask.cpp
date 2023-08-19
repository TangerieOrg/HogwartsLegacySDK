#include "UAblAbilityTask.hpp"
#include "UAblCreaturePathTeleportTask.hpp"
UAblCreaturePathTeleportTask* UAblCreaturePathTeleportTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCreaturePathTeleportTask");
    return (UAblCreaturePathTeleportTask*)res;
}
