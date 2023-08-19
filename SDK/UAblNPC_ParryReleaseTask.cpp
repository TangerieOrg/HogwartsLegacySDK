#include "EEnemy_ParryType.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNPC_ParryReleaseTask.hpp"
UAblNPC_ParryReleaseTask* UAblNPC_ParryReleaseTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_ParryReleaseTask");
    return (UAblNPC_ParryReleaseTask*)res;
}
