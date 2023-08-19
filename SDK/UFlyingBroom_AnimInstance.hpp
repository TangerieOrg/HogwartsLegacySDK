#pragma once
#include <cstdint>
#include "UAnimInstance.hpp"
#pragma pack(push, 1)
class UFlyingBroom_AnimInstance : public UAnimInstance {
public:
    float Speed; // 0x2c0
    bool bIsFlying; // 0x2c4
    bool bBarrelRollLeft; // 0x2c5
    bool bBarrelRollRight; // 0x2c6
    bool bIsStrafing; // 0x2c7
    bool bHasHitUnknown; // 0x2c8
    bool bIsThrowingQuaffle; // 0x2c9
    bool bHasHitCharacterOnBroom; // 0x2ca
    bool bHasHitCreature; // 0x2cb
    bool bHasHitCharacter; // 0x2cc
    char pad_2cd[0x3];
    static UFlyingBroom_AnimInstance* StaticClass();
    void AnimNotify_ThrowQuaffleFinished();
    void AnimNotify_CollisionResponseEnded();
    void AnimNotify_BarrelRollExited();
}; // Size: 0x2d0
#pragma pack(pop)
