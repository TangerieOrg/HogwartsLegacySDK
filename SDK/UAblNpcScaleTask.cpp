#include "UAblAbilityTask.hpp"
#include "UAblNpcScaleTask.hpp"
#include "UCurveFloat.hpp"
UAblNpcScaleTask* UAblNpcScaleTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcScaleTask");
    return (UAblNpcScaleTask*)res;
}
