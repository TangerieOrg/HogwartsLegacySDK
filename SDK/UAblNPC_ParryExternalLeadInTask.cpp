#include "UAblAbilityTask.hpp"
#include "UAblNPC_ParryExternalLeadInTask.hpp"
UAblNPC_ParryExternalLeadInTask* UAblNPC_ParryExternalLeadInTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_ParryExternalLeadInTask");
    return (UAblNPC_ParryExternalLeadInTask*)res;
}
