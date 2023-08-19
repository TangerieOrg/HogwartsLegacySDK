#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblAddOrUpdateAvaMotionWarpSyncPointScratchpad.hpp"
#include "UAblAvaMotionWarpSyncPointUpdaterScratchpad.hpp"
#include "UAmbulatory_MovementComponent.hpp"
UAblAddOrUpdateAvaMotionWarpSyncPointScratchpad* UAblAddOrUpdateAvaMotionWarpSyncPointScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAddOrUpdateAvaMotionWarpSyncPointScratchpad");
    return (UAblAddOrUpdateAvaMotionWarpSyncPointScratchpad*)res;
}
