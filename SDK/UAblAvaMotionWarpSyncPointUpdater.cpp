#include "UAblAvaMotionWarpSyncPointUpdater.hpp"
#include "UObject.hpp"
UAblAvaMotionWarpSyncPointUpdater* UAblAvaMotionWarpSyncPointUpdater::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAvaMotionWarpSyncPointUpdater");
    return (UAblAvaMotionWarpSyncPointUpdater*)res;
}
