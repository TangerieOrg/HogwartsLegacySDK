#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAvaMotionWarpingModifierState : uint8_t {
    Waiting = 0,
    Active = 1,
    MarkedForRemoval = 2,
    Disabled = 3,
    EAvaMotionWarpingModifierState_MAX = 4,
};
#pragma pack(pop)
