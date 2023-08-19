#include "FBlackboardKeySelector.hpp"
#include "UCopyBlackboardLocationToLocationQualifierTask.hpp"
#include "UQualifierTask.hpp"
UCopyBlackboardLocationToLocationQualifierTask* UCopyBlackboardLocationToLocationQualifierTask::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.CopyBlackboardLocationToLocationQualifierTask");
    return (UCopyBlackboardLocationToLocationQualifierTask*)res;
}
