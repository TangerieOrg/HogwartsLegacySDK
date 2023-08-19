#include "UAblAbilityTask.hpp"
#include "UAblHeadTrackingTask.hpp"
UAblHeadTrackingTask* UAblHeadTrackingTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblHeadTrackingTask");
    return (UAblHeadTrackingTask*)res;
}
