#include "EHeadTrackingPriority\Type.hpp"
#include "EHeadTrackingState\Type.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetHeadTrackingStateTask.hpp"
UAblSetHeadTrackingStateTask* UAblSetHeadTrackingStateTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetHeadTrackingStateTask");
    return (UAblSetHeadTrackingStateTask*)res;
}
