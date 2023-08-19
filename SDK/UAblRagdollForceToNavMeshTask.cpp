#include "UAblAbilityTask.hpp"
#include "UAblRagdollForceToNavMeshTask.hpp"
UAblRagdollForceToNavMeshTask* UAblRagdollForceToNavMeshTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblRagdollForceToNavMeshTask");
    return (UAblRagdollForceToNavMeshTask*)res;
}
