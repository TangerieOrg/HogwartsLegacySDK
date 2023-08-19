#pragma once
#include <cstdint>
namespace EMobilityActionState {
#pragma pack(push, 1)
enum Type : uint8_t {
    IsIdle = 0,
    IsWalking = 1,
    IsJogging = 2,
    IsSprinting = 3,
    IsJumping = 4,
    IsFalling = 5,
    IsSideStepping = 6,
    EMobilityActionState_MAX = 7,
};
#pragma pack(pop)
}
