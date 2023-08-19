#pragma once
#include <cstdint>
#include "FHitResult.hpp"
#include "FVector.hpp"
class AActor;
class AEnemy_Character;
#pragma pack(push, 1)
struct FEnemy_MeleeAttackOverlapData {
    AActor* Victim; // 0x0
    AEnemy_Character* Owner; // 0x8
    FHitResult HitResult; // 0x10
    FVector NormalImpulse; // 0x98
    char pad_a4[0x4];
}; // Size: 0xa8
#pragma pack(pop)
