#include "UAblCustomEventListenerOnceTask.hpp"
#include "UAblDisarmEventListenerTask.hpp"
UAblDisarmEventListenerTask* UAblDisarmEventListenerTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblDisarmEventListenerTask");
    return (UAblDisarmEventListenerTask*)res;
}
