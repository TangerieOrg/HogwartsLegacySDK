#include "FBlackboardKeySelector.hpp"
#include "UCopyOptionActorLocationToBlackboardQualifierTask.hpp"
#include "UQualifierTask.hpp"
UCopyOptionActorLocationToBlackboardQualifierTask* UCopyOptionActorLocationToBlackboardQualifierTask::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.CopyOptionActorLocationToBlackboardQualifierTask");
    return (UCopyOptionActorLocationToBlackboardQualifierTask*)res;
}
