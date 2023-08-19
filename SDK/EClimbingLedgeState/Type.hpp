#pragma once
#include <cstdint>
namespace EClimbingLedgeState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    ClimbingLedge_StepUp = 1,
    ClimbingLedge_HalfM = 2,
    ClimbingLedge_1M = 3,
    ClimbingLedge_2M = 4,
    ClimbingLedge_3M = 5,
    ClimbingLedge_LandClimb = 6,
    ClimbingLedge_LandHands = 7,
    ClimbingLedge_LandHands_Outcrop = 8,
    ClimbingLedge_LandWaist = 9,
    ClimbingLedge_LandWaist_Outcrop = 10,
    ClimbingLedge_JumpHands = 11,
    ClimbingLedge_JumpHandsPullUp = 12,
    ClimbingLedge_FallHands = 13,
    ClimbingLedge_Leapfrog = 14,
    ClimbingLedge_Swim = 15,
    NUM = 16,
    EClimbingLedgeState_MAX = 17,
};
#pragma pack(pop)
}
