#pragma once
#include <cstdint>
namespace EFullBodyState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Moving = 1,
    Combat = 2,
    FlooPowder = 3,
    PortKey = 4,
    Sprinting = 5,
    Jumping = 6,
    FireSpell = 7,
    Blocking = 8,
    Parrying = 9,
    Climbing = 10,
    ClimbingLadder = 11,
    Falling = 12,
    Dodging = 13,
    Reacting = 14,
    Teleporting = 15,
    Harvesting = 16,
    PlantSeed = 17,
    StationInteract = 18,
    PickupBucket = 19,
    PutDownBucket = 20,
    SpreadFeed = 21,
    AncientMagic = 22,
    StartCatchCarry = 23,
    CatchCarry = 24,
    StartCarry = 25,
    EndCarry = 26,
    Swimming = 27,
    ButtSliding = 28,
    OpeningChest = 29,
    Cinematic = 30,
    DodgeDucking = 31,
    ShadowBlinking = 32,
    EFullBodyState_MAX = 33,
};
#pragma pack(pop)
}
