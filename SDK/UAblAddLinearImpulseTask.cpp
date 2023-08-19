#include "EAblAddLinearImpulseDirectionType.hpp"
#include "FVector.hpp"
#include "UAblAddLinearImpulseBaseTask.hpp"
#include "UAblAddLinearImpulseTask.hpp"
UAblAddLinearImpulseTask* UAblAddLinearImpulseTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAddLinearImpulseTask");
    return (UAblAddLinearImpulseTask*)res;
}
