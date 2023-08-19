#include "UAblAbilityTask.hpp"
#include "UAblNpcForceFeedbackTask.hpp"
#include "UAblTaskCondition.hpp"
#include "UForceFeedbackEffect.hpp"
UAblNpcForceFeedbackTask* UAblNpcForceFeedbackTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcForceFeedbackTask");
    return (UAblNpcForceFeedbackTask*)res;
}
