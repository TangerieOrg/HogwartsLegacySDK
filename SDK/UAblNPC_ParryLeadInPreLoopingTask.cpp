#include "UAblAbilityTask.hpp"
#include "UAblNPC_ParryLeadInPreLoopingTask.hpp"
UAblNPC_ParryLeadInPreLoopingTask* UAblNPC_ParryLeadInPreLoopingTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_ParryLeadInPreLoopingTask");
    return (UAblNPC_ParryLeadInPreLoopingTask*)res;
}
