#include "FAblSuperSlamCurveData.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSuperSlamTask.hpp"
#include "UMultiFX2_Base.hpp"
UAblSuperSlamTask* UAblSuperSlamTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSuperSlamTask");
    return (UAblSuperSlamTask*)res;
}
