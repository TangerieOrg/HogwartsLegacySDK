#include "FAblSuperSlamCurveData.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSuperSlamSetCurveTask.hpp"
UAblSuperSlamSetCurveTask* UAblSuperSlamSetCurveTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSuperSlamSetCurveTask");
    return (UAblSuperSlamSetCurveTask*)res;
}
