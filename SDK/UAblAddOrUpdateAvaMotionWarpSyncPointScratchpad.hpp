#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAmbulatory_MovementComponent;
class UAblAvaMotionWarpSyncPointUpdaterScratchpad;
#pragma pack(push, 1)
class UAblAddOrUpdateAvaMotionWarpSyncPointScratchpad : public UAblAbilityTaskScratchPad {
public:
    TArray<UAmbulatory_MovementComponent*> MovementComponents; // 0x28
    UAblAvaMotionWarpSyncPointUpdaterScratchpad* UpdaterScratchpad; // 0x38
    static UAblAddOrUpdateAvaMotionWarpSyncPointScratchpad* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
