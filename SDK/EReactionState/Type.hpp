#pragma once
#include <cstdint>
namespace EReactionState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    HitLegsLeft = 1,
    HitLegsRight = 2,
    DeathFront = 3,
    DeathLeft = 4,
    DeathRight = 5,
    DeathBack = 6,
    HitHeadDownFront = 7,
    HitHeadDownLeft = 8,
    HitHeadDownRight = 9,
    HitHeadFront = 10,
    HitHeadLeft = 11,
    HitHeadRight = 12,
    HitHeadUpFront = 13,
    HitHeadUpLeft = 14,
    HitHeadUpRight = 15,
    HitTorsoFront = 16,
    HitTorsoLeft = 17,
    HitTorsoRight = 18,
    KnockDownFront = 19,
    KnockDownLeft = 20,
    KnockDownRight = 21,
    EReactionState_MAX = 22,
};
#pragma pack(pop)
}
