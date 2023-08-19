#include "ENPC_DilateSource.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNPC_DilateTask.hpp"
UAblNPC_DilateTask* UAblNPC_DilateTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_DilateTask");
    return (UAblNPC_DilateTask*)res;
}
