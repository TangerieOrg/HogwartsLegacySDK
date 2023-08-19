#pragma once
#include <cstdint>
#include "EReactionLocationSyncPointType.hpp"
#include "EReactionRotationSyncPointType.hpp"
#include "FVector.hpp"
#include "UAblAvaMotionWarpSyncPointUpdater.hpp"
#pragma pack(push, 1)
class UAblReactionSyncPointUpdater : public UAblAvaMotionWarpSyncPointUpdater {
public:
    EReactionLocationSyncPointType LocationType; // 0x28
    EReactionRotationSyncPointType RotationType; // 0x29
    char pad_2a[0x2];
    FVector LocationOffset; // 0x2c
    static UAblReactionSyncPointUpdater* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
