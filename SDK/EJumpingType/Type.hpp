#pragma once
#include <cstdint>
namespace EJumpingType {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    IdleJump = 1,
    WalkingJump = 2,
    JoggingJump = 3,
    SprintingJump = 4,
    Falling = 5,
    Dropping = 6,
    ClimbFail = 7,
    JumpVault = 8,
    JumpLedge2Vault = 9,
    LadderSlide = 10,
    LadderJumpBottom = 11,
    Buttslide = 12,
    SwimDive = 13,
    SwimHighDive = 14,
    JogJumpDown = 15,
    SprintJumpDown = 16,
    EJumpingType_MAX = 17,
};
#pragma pack(pop)
}
