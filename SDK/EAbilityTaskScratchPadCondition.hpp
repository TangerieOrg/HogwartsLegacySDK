#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAbilityTaskScratchPadCondition : uint8_t {
    None = 0,
    Hit = 1,
    HitTarget = 2,
    HitGround = 3,
    IsBurning = 4,
    IsCharred = 5,
    HasTarget = 6,
    IsDead = 7,
    TriggerTransition = 8,
    RandomDuration = 9,
    RandomDurationTransition = 10,
    ApparateAttackCount = 11,
    HideLocSelected = 12,
    JumpSplineDone = 13,
    SplineSpawnAdvance = 14,
    Suspended = 15,
    Hovering = 16,
    HasWeapon = 17,
    AttackCustomFlag = 18,
    TasIsAlert = 19,
    TasIsAttack = 20,
    IsSwimming = 21,
    EAbilityTaskScratchPadCondition_MAX = 22,
};
#pragma pack(pop)
