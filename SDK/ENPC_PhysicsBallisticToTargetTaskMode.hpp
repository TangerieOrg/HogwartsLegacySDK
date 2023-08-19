#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_PhysicsBallisticToTargetTaskMode : uint8_t {
    Start = 0,
    Update = 1,
    StartAndUpdate = 2,
    Reset = 3,
    StartUpdateAndReset = 4,
    ENPC_MAX = 5,
};
#pragma pack(pop)
