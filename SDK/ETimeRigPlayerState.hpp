#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeRigPlayerState : uint8_t {
    Uninitialized = 0,
    PreparingToInitialize = 1,
    Initializing = 2,
    Active = 3,
    Finishing = 4,
    Finished = 5,
    ETimeRigPlayerState_MAX = 6,
};
#pragma pack(pop)
