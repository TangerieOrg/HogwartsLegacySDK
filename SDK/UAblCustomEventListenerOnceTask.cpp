#include "UAblCustomEventListenerOnceTask.hpp"
#include "UAblCustomEventListenerTask.hpp"
UAblCustomEventListenerOnceTask* UAblCustomEventListenerOnceTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCustomEventListenerOnceTask");
    return (UAblCustomEventListenerOnceTask*)res;
}
