#include "UAblAbilityTask.hpp"
#include "UAblNPC_ParryLeadInTask.hpp"
UAblNPC_ParryLeadInTask* UAblNPC_ParryLeadInTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_ParryLeadInTask");
    return (UAblNPC_ParryLeadInTask*)res;
}
