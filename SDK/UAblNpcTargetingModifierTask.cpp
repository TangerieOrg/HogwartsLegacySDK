#include "UAblAbilityTask.hpp"
#include "UAblNpcTargetingModifierTask.hpp"
UAblNpcTargetingModifierTask* UAblNpcTargetingModifierTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcTargetingModifierTask");
    return (UAblNpcTargetingModifierTask*)res;
}
