#include "UAblAbilityTask.hpp"
#include "UAblCustomEventFiredOnMeshOverlapTask.hpp"
UAblCustomEventFiredOnMeshOverlapTask* UAblCustomEventFiredOnMeshOverlapTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCustomEventFiredOnMeshOverlapTask");
    return (UAblCustomEventFiredOnMeshOverlapTask*)res;
}
