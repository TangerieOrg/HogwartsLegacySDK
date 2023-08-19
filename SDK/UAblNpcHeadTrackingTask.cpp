#include "UAblAbilityTask.hpp"
#include "UAblNpcHeadTrackingTask.hpp"
UAblNpcHeadTrackingTask* UAblNpcHeadTrackingTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcHeadTrackingTask");
    return (UAblNpcHeadTrackingTask*)res;
}
