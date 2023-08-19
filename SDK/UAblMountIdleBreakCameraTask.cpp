#include "UAblAbilityTask.hpp"
#include "UAblMountIdleBreakCameraTask.hpp"
UAblMountIdleBreakCameraTask* UAblMountIdleBreakCameraTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblMountIdleBreakCameraTask");
    return (UAblMountIdleBreakCameraTask*)res;
}
