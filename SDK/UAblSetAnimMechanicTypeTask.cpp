#include "EAnimMechanicType\Type.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetAnimMechanicTypeTask.hpp"
UAblSetAnimMechanicTypeTask* UAblSetAnimMechanicTypeTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetAnimMechanicTypeTask");
    return (UAblSetAnimMechanicTypeTask*)res;
}
