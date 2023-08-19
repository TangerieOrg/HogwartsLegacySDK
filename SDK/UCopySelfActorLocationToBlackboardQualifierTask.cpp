#include "FBlackboardKeySelector.hpp"
#include "UCopySelfActorLocationToBlackboardQualifierTask.hpp"
#include "UQualifierTask.hpp"
UCopySelfActorLocationToBlackboardQualifierTask* UCopySelfActorLocationToBlackboardQualifierTask::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.CopySelfActorLocationToBlackboardQualifierTask");
    return (UCopySelfActorLocationToBlackboardQualifierTask*)res;
}
