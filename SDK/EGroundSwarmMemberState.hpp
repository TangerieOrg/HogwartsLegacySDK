#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroundSwarmMemberState : uint8_t {
    Frozen = 0,
    Freefalling = 1,
    OnSurface = 2,
    Burrowing = 3,
    DeathLeap = 4,
    Dead = 5,
    EGroundSwarmMemberState_MAX = 6,
};
#pragma pack(pop)
