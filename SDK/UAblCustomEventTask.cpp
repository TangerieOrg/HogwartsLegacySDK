#include "EAblAbilityTaskRealm.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblCustomEventTask.hpp"
UAblCustomEventTask* UAblCustomEventTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCustomEventTask");
    return (UAblCustomEventTask*)res;
}
