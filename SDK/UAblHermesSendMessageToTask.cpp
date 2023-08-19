#include "EAblAbilityTargetType.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblHermesSendMessageToTask.hpp"
UAblHermesSendMessageToTask* UAblHermesSendMessageToTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblHermesSendMessageToTask");
    return (UAblHermesSendMessageToTask*)res;
}
