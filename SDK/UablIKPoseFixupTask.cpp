#include "FIKPoseFixupDefinition.hpp"
#include "UAblAbilityTask.hpp"
#include "UablIKPoseFixupTask.hpp"
UablIKPoseFixupTask* UablIKPoseFixupTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablIKPoseFixupTask");
    return (UablIKPoseFixupTask*)res;
}
