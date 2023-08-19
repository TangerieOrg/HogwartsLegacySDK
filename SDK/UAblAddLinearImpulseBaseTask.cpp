#include "UAblAbilityTask.hpp"
#include "UAblAddLinearImpulseBaseTask.hpp"
UAblAddLinearImpulseBaseTask* UAblAddLinearImpulseBaseTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAddLinearImpulseBaseTask");
    return (UAblAddLinearImpulseBaseTask*)res;
}
