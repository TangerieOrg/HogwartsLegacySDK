#pragma once
#include <cstdint>
#include "APhoenixBudgetedActor.hpp"
#include "FMasterTickThrottlerSettings.hpp"
class UCapsuleComponent;
struct FHitResult;
class ASpellTool;
class USkeletalMeshComponent;
class AActor;
class UAnimationComponent;
class UPropOwl_AnimInstance;
class USpellToolRecord;
struct FVector;
#pragma pack(push, 1)
class APropOwl : public APhoenixBudgetedActor {
public:
    char pad_268[0x8];
    UCapsuleComponent* CapsuleComponent; // 0x270
    USkeletalMeshComponent* SkeletalMeshComponent; // 0x278
    UAnimationComponent* AnimationComponent; // 0x280
    bool EnableSpellReaction; // 0x288
    bool EnableImpactReaction; // 0x289
    char pad_28a[0x2];
    float ImpactReactionRange; // 0x28c
    bool EnableLookAt; // 0x290
    char pad_291[0x3];
    float MaxLookAtDistance; // 0x294
    float MaxLookAtAngle; // 0x298
    bool CanSleep; // 0x29c
    char pad_29d[0x3];
    float SleepingProbability; // 0x2a0
    float MinStanceSwitchTime; // 0x2a4
    char pad_2a8[0xa0];
    FMasterTickThrottlerSettings TickThrottlerSettings; // 0x348
    UPropOwl_AnimInstance* AnimInstance; // 0x370
    char pad_378[0x20];
    static APropOwl* StaticClass();
    void StartReaction();
    void OnHitBySpell(ASpellTool* SpellTool, AActor* InInstigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void EndReaction();
}; // Size: 0x398
#pragma pack(pop)
