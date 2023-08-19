#include "UAblAbilityTask.hpp"
#include "UablBroomMountKeepAboveGroundTask.hpp"
UablBroomMountKeepAboveGroundTask* UablBroomMountKeepAboveGroundTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablBroomMountKeepAboveGroundTask");
    return (UablBroomMountKeepAboveGroundTask*)res;
}
