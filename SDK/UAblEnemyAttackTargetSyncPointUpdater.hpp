#pragma once
#include <cstdint>
#include "UAblAvaMotionWarpSyncPointUpdater.hpp"
#pragma pack(push, 1)
class UAblEnemyAttackTargetSyncPointUpdater : public UAblAvaMotionWarpSyncPointUpdater {
public:
    float DesiredDistanceToTarget; // 0x28
    bool bAllowPositiveTravel; // 0x2c
    bool bAllowNegativeTravel; // 0x2d
    bool bRemoveSyncPointOnParryAbort; // 0x2e
    char pad_2f[0x1];
    static UAblEnemyAttackTargetSyncPointUpdater* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
