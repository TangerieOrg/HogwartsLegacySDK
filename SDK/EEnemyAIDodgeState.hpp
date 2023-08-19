#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyAIDodgeState : uint8_t {
    None = 0,
    DodgeLeft = 1,
    DodgeRight = 2,
    RollLeft = 3,
    RollRight = 4,
    SlideLeft = 5,
    SlideRight = 6,
    Duck = 7,
    ApparateToLocation = 8,
    EEnemyAIDodgeState_MAX = 9,
};
#pragma pack(pop)
