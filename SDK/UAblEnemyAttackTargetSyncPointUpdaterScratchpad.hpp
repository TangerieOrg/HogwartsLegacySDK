#pragma once
#include <cstdint>
#include "UAblAvaMotionWarpSyncPointUpdaterScratchpad.hpp"
#pragma pack(push, 1)
class UAblEnemyAttackTargetSyncPointUpdaterScratchpad : public UAblAvaMotionWarpSyncPointUpdaterScratchpad {
public:
    char pad_28[0x18];
    static UAblEnemyAttackTargetSyncPointUpdaterScratchpad* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
