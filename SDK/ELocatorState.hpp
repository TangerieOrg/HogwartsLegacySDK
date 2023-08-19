#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ELocatorState {
    WaitingToSpawn = 0,
    FailedToSpawn = 1,
    ActiveEvent = 2,
    StreamWithLevel = 3,
    Completed = 4,
    ELocatorState_MAX = 5,
};
#pragma pack(pop)
