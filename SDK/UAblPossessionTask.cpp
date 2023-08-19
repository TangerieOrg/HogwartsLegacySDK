#include "EAblAbilityTargetType.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblPossessionTask.hpp"
UAblPossessionTask* UAblPossessionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblPossessionTask");
    return (UAblPossessionTask*)res;
}
