#include "UAblAbilityTask.hpp"
#include "UAblCreatureNavLinkTeleportTask.hpp"
UAblCreatureNavLinkTeleportTask* UAblCreatureNavLinkTeleportTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCreatureNavLinkTeleportTask");
    return (UAblCreatureNavLinkTeleportTask*)res;
}
