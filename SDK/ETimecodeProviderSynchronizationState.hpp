#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimecodeProviderSynchronizationState : int32_t {
    Closed = 0,
    Error = 1,
    Synchronized = 2,
    Synchronizing = 3,
    ETimecodeProviderSynchronizationState_MAX = 4,
};
#pragma pack(pop)
