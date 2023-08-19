#include "FBlackboardKeySelector.hpp"
#include "UCopyOptionActorToBlackboardQualifierTask.hpp"
#include "UQualifierTask.hpp"
UCopyOptionActorToBlackboardQualifierTask* UCopyOptionActorToBlackboardQualifierTask::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.CopyOptionActorToBlackboardQualifierTask");
    return (UCopyOptionActorToBlackboardQualifierTask*)res;
}
