#include "UAblAbilityTask.hpp"
#include "UAblCreatureSetupPathTeleportTask.hpp"
UAblCreatureSetupPathTeleportTask* UAblCreatureSetupPathTeleportTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCreatureSetupPathTeleportTask");
    return (UAblCreatureSetupPathTeleportTask*)res;
}
