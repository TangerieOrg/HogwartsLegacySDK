#pragma once
#include <cstdint>
namespace EClimbingLadderState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Mount = 1,
    MountDown = 2,
    ClimbingLadder = 3,
    DescendingLadder = 4,
    Paused = 5,
    DismountTop = 6,
    DismountBottom = 7,
    MountJump = 8,
    EClimbingLadderState_MAX = 9,
};
#pragma pack(pop)
}
