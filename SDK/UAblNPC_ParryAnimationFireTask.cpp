#include "UAblAbilityTask.hpp"
#include "UAblNPC_ParryAnimationFireTask.hpp"
UAblNPC_ParryAnimationFireTask* UAblNPC_ParryAnimationFireTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_ParryAnimationFireTask");
    return (UAblNPC_ParryAnimationFireTask*)res;
}
