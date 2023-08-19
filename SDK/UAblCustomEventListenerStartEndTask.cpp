#include "UAblCustomEventListenerStartEndTask.hpp"
#include "UAblCustomEventListenerTask.hpp"
UAblCustomEventListenerStartEndTask* UAblCustomEventListenerStartEndTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCustomEventListenerStartEndTask");
    return (UAblCustomEventListenerStartEndTask*)res;
}
