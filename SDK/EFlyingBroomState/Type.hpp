#pragma once
#include <cstdint>
namespace EFlyingBroomState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Flying = 1,
    Strafe = 2,
    BarrelRollLft = 3,
    BarrelRollRht = 4,
    AimMode = 5,
    AftView = 6,
    CombatMode = 7,
    Boosting = 8,
    Turbo = 9,
    React = 10,
    EFlyingBroomState_MAX = 11,
};
#pragma pack(pop)
}
