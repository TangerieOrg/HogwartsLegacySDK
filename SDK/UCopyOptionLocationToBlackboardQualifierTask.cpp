#include "FBlackboardKeySelector.hpp"
#include "UCopyOptionLocationToBlackboardQualifierTask.hpp"
#include "UQualifierTask.hpp"
UCopyOptionLocationToBlackboardQualifierTask* UCopyOptionLocationToBlackboardQualifierTask::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.CopyOptionLocationToBlackboardQualifierTask");
    return (UCopyOptionLocationToBlackboardQualifierTask*)res;
}
