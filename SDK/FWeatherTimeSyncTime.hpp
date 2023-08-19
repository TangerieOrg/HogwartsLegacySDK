#pragma once
#include <cstdint>
#include "FTimespan.hpp"
#pragma pack(push, 1)
struct FWeatherTimeSyncTime {
    FTimespan GameSyncBase; // 0x0
    FTimespan SequenceSyncBase; // 0x8
    FTimespan SyncError; // 0x10
}; // Size: 0x18
#pragma pack(pop)
