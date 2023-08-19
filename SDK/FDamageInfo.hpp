#pragma once
#include <cstdint>
#include "EEnemyShieldBreaker.hpp"
#include "EImpactTypes.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMultiVfx.hpp"
#include "FVector.hpp"
class UInteractionArchitectAsset;
class AActor;
class AMunitionType_Base;
class UPrimitiveComponent;
class ASpellTool;
#pragma pack(push, 1)
struct FDamageInfo {
    float Amount; // 0x0
    bool bIsCritical; // 0x4
    char pad_5[0x3];
    FHitResult HitResult; // 0x8
    FGameplayTagContainer MunitionTagContainer; // 0x90
    TArray<UInteractionArchitectAsset*> MunitionDataAssets; // 0xb0
    AActor* TargetActor; // 0xc0
    AActor* DestinationActor; // 0xc8
    UPrimitiveComponent* TargetComp; // 0xd0
    AActor* Instigator; // 0xd8
    AMunitionType_Base* Munition; // 0xe0
    FVector Velocity; // 0xe8
    FVector ImpactDirection; // 0xf4
    FVector ImpactNormal; // 0x100
    FVector ImpactPoint; // 0x10c
    FVector SourcePoint; // 0x118
    FVector DestinationPoint; // 0x124
    EImpactTypes ImpactType; // 0x130
    bool bIgnoreDamageThreshold; // 0x131
    bool bImpactOnFire; // 0x132
    bool bSkipImpactSound; // 0x133
    bool bPlayerShieldBreaker; // 0x134
    EEnemyShieldBreaker EnemyShieldBreaker; // 0x135
    bool bCursedDamage; // 0x136
    bool bCollisionDamage; // 0x137
    bool bDeadlyAttack; // 0x138
    bool bFinisher; // 0x139
    bool bAlwaysKillTarget; // 0x13a
    bool bNoReaction; // 0x13b
    bool bOnlyCalculateDamage; // 0x13c
    bool bNonLethal; // 0x13d
    bool bDOT; // 0x13e
    bool bPhysicsCollision; // 0x13f
    bool bRestoreBroken; // 0x140
    bool bApplyEvenWhenBlocking; // 0x141
    char pad_142[0x2];
    float DestructionForce; // 0x144
    float RadialDestructionForce; // 0x148
    float Force; // 0x14c
    float DestroyPieceVFXRadius; // 0x150
    float Duration; // 0x154
    FMultiVfx DestroyPieceVFX; // 0x158
    ASpellTool* SpellTool; // 0x170
    FName BoneName; // 0x178
    char pad_180[0x8];
    float CharacterDamage; // 0x188
    float FallDamagePercent; // 0x18c
    char pad_190[0x38];
}; // Size: 0x1c8
#pragma pack(pop)
