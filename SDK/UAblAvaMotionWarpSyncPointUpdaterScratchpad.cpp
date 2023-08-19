#include "UAblAvaMotionWarpSyncPointUpdaterScratchpad.hpp"
#include "UObject.hpp"
UAblAvaMotionWarpSyncPointUpdaterScratchpad* UAblAvaMotionWarpSyncPointUpdaterScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAvaMotionWarpSyncPointUpdaterScratchpad");
    return (UAblAvaMotionWarpSyncPointUpdaterScratchpad*)res;
}
