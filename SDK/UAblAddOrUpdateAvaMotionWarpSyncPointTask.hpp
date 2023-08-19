#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UAblAvaMotionWarpSyncPointUpdater;
#pragma pack(push, 1)
class UAblAddOrUpdateAvaMotionWarpSyncPointTask : public UAblAbilityTask {
public:
    FName SyncPointName; // 0x70
    UAblAvaMotionWarpSyncPointUpdater* SyncPointUpdater; // 0x78
    bool bUpdateSyncPointOnTick; // 0x80
    bool bRemoveSyncPointOnEndOfTask; // 0x81
    char pad_82[0x6];
    static UAblAddOrUpdateAvaMotionWarpSyncPointTask* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
