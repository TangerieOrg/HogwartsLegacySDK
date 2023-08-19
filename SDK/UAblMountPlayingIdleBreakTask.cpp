#include "UAblAbilityTask.hpp"
#include "UAblMountPlayingIdleBreakTask.hpp"
UAblMountPlayingIdleBreakTask* UAblMountPlayingIdleBreakTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblMountPlayingIdleBreakTask");
    return (UAblMountPlayingIdleBreakTask*)res;
}
