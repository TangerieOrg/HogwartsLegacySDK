#include "UAblAbilityTask.hpp"
#include "UAblCustomEventListenerTask.hpp"
UAblCustomEventListenerTask* UAblCustomEventListenerTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCustomEventListenerTask");
    return (UAblCustomEventListenerTask*)res;
}
