#include "UAblAbilityTask.hpp"
#include "UAblDisableAutoTargetingTask.hpp"
UAblDisableAutoTargetingTask* UAblDisableAutoTargetingTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblDisableAutoTargetingTask");
    return (UAblDisableAutoTargetingTask*)res;
}
