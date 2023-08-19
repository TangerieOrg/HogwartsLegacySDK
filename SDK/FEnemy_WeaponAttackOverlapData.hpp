#pragma once
#include <cstdint>
#include "FHitResult.hpp"
#include "FVector.hpp"
class AActor;
class AEnemy_Character;
#pragma pack(push, 1)
struct FEnemy_WeaponAttackOverlapData {
    AActor* Victim; // 0x0
    AEnemy_Character* Owner; // 0x8
    FHitResult HitResult; // 0x10
    FVector NormalImpulse; // 0x98
    FVector ImpactLoc; // 0xa4
}; // Size: 0xb0
#pragma pack(pop)
