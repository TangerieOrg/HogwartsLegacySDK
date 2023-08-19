#include "ETimeDilationTarget\Type.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblTimeDilationTask.hpp"
#include "UCurveFloat.hpp"
UAblTimeDilationTask* UAblTimeDilationTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblTimeDilationTask");
    return (UAblTimeDilationTask*)res;
}
