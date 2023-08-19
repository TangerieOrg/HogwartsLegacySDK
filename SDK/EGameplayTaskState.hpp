#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGameplayTaskState {
    Uninitialized = 0,
    AwaitingActivation = 1,
    Paused = 2,
    Active = 3,
    Finished = 4,
    EGameplayTaskState_MAX = 5,
};
#pragma pack(pop)
