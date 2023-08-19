#pragma once
#include <cstdint>
#include "AMunitionType_Base.hpp"
#include "ECollisionChannel.hpp"
#include "EComboType.hpp"
#include "ENoiseSize.hpp"
#include "FMultiFX2Handle.hpp"
class UClass;
struct FVector;
class UMultiFX2_Base;
struct FRotator;
class ASpellTool;
class UAkAudioEvent;
struct FHitResult;
class AActor;
class UAkComponent;
struct FMunitionImpactData;
#pragma pack(push, 1)
class AMunitionType_AOE_MultiFX : public AMunitionType_Base {
public:
    char pad_360[0x8];
    float MinDamage; // 0x368
    float CharacterDamage; // 0x36c
    float m_radiusStart; // 0x370
    float m_radiusEnd; // 0x374
    bool bUseCustomGrowthDuration; // 0x378
    char pad_379[0x3];
    float CustomGrowthDuration; // 0x37c
    float m_hitVictimInterval; // 0x380
    ECollisionChannel CollisionChannel; // 0x384
    char pad_385[0x3];
    UClass* m_damageType; // 0x388
    float PhysicsImpulse; // 0x390
    float PhysicsAngularImpulse; // 0x394
    bool bOnlyTestDamageOnce; // 0x398
    char pad_399[0x1];
    bool bUnblockable; // 0x39a
    bool bBreakBlockFX; // 0x39b
    bool bAffectCompanions; // 0x39c
    bool bAffectCharacters; // 0x39d
    bool bOnlyAffectCharactersOfHostileTeams; // 0x39e
    bool bAffectObjects; // 0x39f
    bool bTransformedCharactersAffectedLikeCharacters; // 0x3a0
    bool bRespectInstigatorCanHit; // 0x3a1
    bool bTriggerNPCResponse; // 0x3a2
    bool bRespectCover; // 0x3a3
    bool bCalculatePositionOnce; // 0x3a4
    EComboType ComboType; // 0x3a5
    char pad_3a6[0x2];
    FName FocusType; // 0x3a8
    float AnnounceTime; // 0x3b0
    float AnnounceHomingSpeed; // 0x3b4
    bool bKeepAnnounceStartRunning; // 0x3b8
    bool bForceAnnounceStartEndOnCancel; // 0x3b9
    char pad_3ba[0x6];
    TArray<UMultiFX2_Base*> AnnounceStartFX2; // 0x3c0
    TArray<UMultiFX2_Base*> AnnounceFX2; // 0x3d0
    TArray<UMultiFX2_Base*> AnnounceFizzleFX2; // 0x3e0
    UAkAudioEvent* AnnounceMotionFX; // 0x3f0
    bool bRequireTriggerToWarn; // 0x3f8
    char pad_3f9[0x3];
    float WarningTime; // 0x3fc
    float WarningHomingSpeed; // 0x400
    char pad_404[0x4];
    TArray<UMultiFX2_Base*> WarningStartFX2; // 0x408
    TArray<UMultiFX2_Base*> WarningFX2; // 0x418
    TArray<UMultiFX2_Base*> WarningFizzleFX2; // 0x428
    UAkAudioEvent* WarningMotionFX; // 0x438
    bool bRequireTriggerToExplode; // 0x440
    char pad_441[0x7];
    TArray<UMultiFX2_Base*> ExplosionFX2; // 0x448
    bool ExplosionFX_EndImmediately; // 0x458
    char pad_459[0x3];
    float ExplosionStartTime; // 0x45c
    float ExplosionEndTime; // 0x460
    char pad_464[0x4];
    TArray<UMultiFX2_Base*> ExplosionStartFX2; // 0x468
    TArray<UMultiFX2_Base*> ExplosionEndFX2; // 0x478
    UAkAudioEvent* ExplosionMotionFX; // 0x488
    bool PlayExplosionOnGround; // 0x490
    bool m_stopAtCollision; // 0x491
    char pad_492[0x6];
    TArray<UMultiFX2_Base*> HitActorFX2; // 0x498
    TArray<UMultiFX2_Base*> HitTerrainFX2; // 0x4a8
    TArray<UMultiFX2_Base*> HitBlockedFX2; // 0x4b8
    ENoiseSize FireNoiseSize; // 0x4c8
    ENoiseSize ImpactNoiseSize; // 0x4c9
    bool bThrowTarget; // 0x4ca
    char pad_4cb[0x1];
    int32_t TargetHalfAngleXY; // 0x4cc
    int32_t TargetHalfAngleZ; // 0x4d0
    float LaunchAngle; // 0x4d4
    float InAirLaunchAngle; // 0x4d8
    float MaximumLaunchAngle; // 0x4dc
    float HeightAdjustment; // 0x4e0
    float LevelMinZThreshold; // 0x4e4
    float LevelMaxZThreshold; // 0x4e8
    float BasePhysicsImpulse; // 0x4ec
    float MassScaledPhysicsImpulse; // 0x4f0
    float CharacterBasePhysicsImpulse; // 0x4f4
    float CharacterMassScaledPhysicsImpulse; // 0x4f8
    float MaxVelocity; // 0x4fc
    int32_t TargetingPercent; // 0x500
    bool bUpdateTarget; // 0x504
    char pad_505[0x3];
    float LeviosoImpulseScale; // 0x508
    float MinDamageDealt; // 0x50c
    float MaxDamageDealt; // 0x510
    float MinDamageDealtCharacter; // 0x514
    float MaxDamageDealtCharacter; // 0x518
    float MinDamageTaken; // 0x51c
    float MaxDamageTaken; // 0x520
    float MinDamageTakenCharacter; // 0x524
    float MaxDamageTakenCharacter; // 0x528
    float MinDamageTakenCharacterWall; // 0x52c
    float MaxDamageTakenCharacterWall; // 0x530
    float MinDamageTakenCharacterFloor; // 0x534
    float MaxDamageTakenCharacterFloor; // 0x538
    float MinDamageTakenCharacterCharacter; // 0x53c
    float MaxDamageTakenCharacterCharacter; // 0x540
    float ArrestoTimeExtension; // 0x544
    bool bTriggerMunitionSentMessage; // 0x548
    char pad_549[0x57];
    TArray<AActor*> m_ignoreActors; // 0x5a0
    char pad_5b0[0x90];
    UAkComponent* AnnounceMotionComponent; // 0x640
    UAkComponent* WarningMotionComponent; // 0x648
    UAkComponent* ExplosionMotionComponent; // 0x650
    ASpellTool* SpellTool; // 0x658
    static AMunitionType_AOE_MultiFX* StaticClass();
    void TriggerWarningStart();
    void TriggerWarningLoop();
    void TriggerWarning();
    void TriggerImpactEnd();
    void TriggerImpact(bool bSkipStartState);
    void TriggerFizzle();
    void TriggerExplode();
    void TriggerEnd();
    void TriggerArresto();
    void TriggerAnnounceLoop();
    void OnWarning(FVector& Location, FRotator& Rotation, FMultiFX2Handle FXHandle);
    void OnHit(FMunitionImpactData& MunitionImpact, FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed);
    void OnExplode(FVector& Location, FRotator& Rotation, FMultiFX2Handle FXHandle);
    void OnAnnounce(FVector& Location, FRotator& Rotation, FMultiFX2Handle FXHandle);
    bool IsArresto();
    FMultiFX2Handle GetWarningFXHandle();
    FMultiFX2Handle GetFizzleFXHandle();
    FMultiFX2Handle GetExplodeFXHandle();
    FMultiFX2Handle GetAnnounceFXHandle();
    void EndArresto();
    void Cancel();
}; // Size: 0x660
#pragma pack(pop)
