#include "UAblAbilityTask.hpp"
#include "UAblNPC_TargetableToggleTask.hpp"
UAblNPC_TargetableToggleTask* UAblNPC_TargetableToggleTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_TargetableToggleTask");
    return (UAblNPC_TargetableToggleTask*)res;
}
