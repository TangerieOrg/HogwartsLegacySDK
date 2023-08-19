#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNpcBakedPoseRigidbodyTask.hpp"
UAblNpcBakedPoseRigidbodyTask* UAblNpcBakedPoseRigidbodyTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcBakedPoseRigidbodyTask");
    return (UAblNpcBakedPoseRigidbodyTask*)res;
}
