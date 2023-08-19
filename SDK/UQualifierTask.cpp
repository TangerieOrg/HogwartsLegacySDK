#include "UObject.hpp"
#include "UQualifierTask.hpp"
UQualifierTask* UQualifierTask::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.QualifierTask");
    return (UQualifierTask*)res;
}
