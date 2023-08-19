#include "FBlackboardKeySelector.hpp"
#include "UCopyOptionActorChildLocationToBlackboardQualifierTask.hpp"
#include "UQualifierTask.hpp"
UCopyOptionActorChildLocationToBlackboardQualifierTask* UCopyOptionActorChildLocationToBlackboardQualifierTask::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.CopyOptionActorChildLocationToBlackboardQualifierTask");
    return (UCopyOptionActorChildLocationToBlackboardQualifierTask*)res;
}
