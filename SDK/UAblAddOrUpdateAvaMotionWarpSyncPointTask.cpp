#include "UAblAbilityTask.hpp"
#include "UAblAddOrUpdateAvaMotionWarpSyncPointTask.hpp"
#include "UAblAvaMotionWarpSyncPointUpdater.hpp"
UAblAddOrUpdateAvaMotionWarpSyncPointTask* UAblAddOrUpdateAvaMotionWarpSyncPointTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAddOrUpdateAvaMotionWarpSyncPointTask");
    return (UAblAddOrUpdateAvaMotionWarpSyncPointTask*)res;
}
