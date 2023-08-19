#include "EAblAbilityTargetType.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblPlayAbilityTask.hpp"
#include "UClass.hpp"
UAblPlayAbilityTask* UAblPlayAbilityTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblPlayAbilityTask");
    return (UAblPlayAbilityTask*)res;
}
