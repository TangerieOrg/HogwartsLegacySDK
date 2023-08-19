#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECustomTimeStepSynchronizationState {
    Closed = 0,
    Error = 1,
    Synchronized = 2,
    Synchronizing = 3,
    ECustomTimeStepSynchronizationState_MAX = 4,
};
#pragma pack(pop)
