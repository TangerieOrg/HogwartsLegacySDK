#include "UAblAbilityTask.hpp"
#include "UAblObjectStateImpulseIgnoreTask.hpp"
UAblObjectStateImpulseIgnoreTask* UAblObjectStateImpulseIgnoreTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblObjectStateImpulseIgnoreTask");
    return (UAblObjectStateImpulseIgnoreTask*)res;
}
