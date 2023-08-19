#include "EAblAbilityTargetType.hpp"
#include "EAblAbilityTaskRealm.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblDamageEventTask.hpp"
UAblDamageEventTask* UAblDamageEventTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblDamageEventTask");
    return (UAblDamageEventTask*)res;
}
