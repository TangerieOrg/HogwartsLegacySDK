#pragma once
#include <cstdint>
#include "ATool.hpp"
#include "EEnemyAIWeaponState\Type.hpp"
#include "EEnemyAIWeapon_Event.hpp"
#include "EEnemyWeaponEquip.hpp"
#include "EEnemyWeaponTypeEnum.hpp"
#include "EPhysicsMunitionHitType.hpp"
#include "EWeaponAttachmentTransformRules.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMultiFX2Handle.hpp"
#include "FVector.hpp"
class UInteractionArchitectAsset;
class UMultiFX2_Base;
class UEnemyCorruptionData;
class UClass;
class AActor;
class UPrimitiveComponent;
class USceneComponent;
struct FEnemy_WeaponAttackOverlapData;
class AMunitionType_Base;
struct FMunitionImpactData;
class AMunitionType_Physics;
class APawn;
#pragma pack(push, 1)
class AEnemyAIWeapon : public ATool {
public:
    TArray<UMultiFX2_Base*> SuccessfulMeleeFx; // 0x2e0
    TArray<UMultiFX2_Base*> SuccessfulRangedFx; // 0x2f0
    TArray<UMultiFX2_Base*> BlockedMeleeFx; // 0x300
    TArray<UMultiFX2_Base*> RecoverLocFx; // 0x310
    FMultiFX2Handle RecoverFXHandle; // 0x320
    UEnemyCorruptionData* AggroCorruptionSettings; // 0x328
    UEnemyCorruptionData* AggroCorruptionInstance; // 0x330
    FGameplayTag AATag; // 0x338
    FGameplayTag AttackSelectionTag; // 0x340
    FVector AttachOffset; // 0x348
    FVector AttachRot; // 0x354
    FGameplayTagContainer IAApplyEquipedTagContainer; // 0x360
    FGameplayTagContainer IARemovedUnequipedTagContainer; // 0x380
    FGameplayTagContainer IAApplyUnequipedTagContainer; // 0x3a0
    FGameplayTagContainer IARemovedEquipedTagContainer; // 0x3c0
    FGameplayTagContainer AAApplyEquipedTagContainer; // 0x3e0
    FGameplayTagContainer AARemovedUnequipedTagContainer; // 0x400
    FGameplayTagContainer AAApplyUnequipedTagContainer; // 0x420
    FGameplayTagContainer AARemovedEquipedTagContainer; // 0x440
    float EquipApplyTagTime; // 0x460
    float ThrowSpeed; // 0x464
    bool bIgnoreGravityWhenThrown; // 0x468
    char pad_469[0x3];
    float throwOffsetForward; // 0x46c
    float throwTargetHeightOffset; // 0x470
    FVector ThrowOrientRotDegrees; // 0x474
    FVector ThrowRotDegrees; // 0x480
    FVector ThrowMeshRotDegrees; // 0x48c
    FVector ProtegoRotDegrees; // 0x498
    float ProtegoBlockSpeed; // 0x4a4
    float ProtegoBounceBackSpeed; // 0x4a8
    float ProtegoDeflectSpeed; // 0x4ac
    float bProtegoConstrainDirToUp; // 0x4b0
    FVector DisarmRotDegrees; // 0x4b4
    FVector DisarmMaxVel; // 0x4c0
    FVector DisarmMinVel; // 0x4cc
    FVector DropMaxVel; // 0x4d8
    FVector DropMinVel; // 0x4e4
    FVector DeathMaxVel; // 0x4f0
    FVector DeathMinVel; // 0x4fc
    float impactFxMinRepeatTime; // 0x508
    bool bTerrainDestroysMunition; // 0x50c
    bool bAllowWeaponDeflection; // 0x50d
    bool bDestroyWeaponOnSuccessfulPhysicsMunitionHit; // 0x50e
    bool bForceLifetimeCountdownAfterRangedHit; // 0x50f
    EEnemyWeaponEquip EquipMode; // 0x510
    bool bCanSwitchOut; // 0x511
    EEnemyWeaponTypeEnum StoredWeaponTypeEnum; // 0x512
    char pad_513[0x1];
    uint32_t EquipPriority; // 0x514
    uint32_t EquipWeight; // 0x518
    float weaponDamage; // 0x51c
    EWeaponAttachmentTransformRules AttachRule; // 0x520
    bool bPowerupEligible; // 0x521
    char pad_522[0x2];
    float PowerupDamagePercent; // 0x524
    float PowerupTimeout; // 0x528
    bool bAllowSpellDeflection; // 0x52c
    bool bIsAShield; // 0x52d
    bool SpawnWithPhysics; // 0x52e
    bool bCanBeStored; // 0x52f
    bool bCanBeThrown; // 0x530
    bool bCanBeDisarmed; // 0x531
    bool bCanBeRecovered; // 0x532
    bool bJustHideForRecovery; // 0x533
    char pad_534[0x8];
    float PostThrownLifetime; // 0x53c
    float PostDropLifetime; // 0x540
    float PostProtegoLifetime; // 0x544
    float LifetimeEndEvent; // 0x548
    bool bOnWall; // 0x54c
    char pad_54d[0x3];
    UClass* MunitionActor; // 0x550
    FName MunitionImpactType; // 0x558
    FGameplayTagContainer MunitionTagContainer; // 0x560
    UInteractionArchitectAsset* MunitionDataAsset; // 0x580
    UClass* AOE1MunitionActor; // 0x588
    FName AOE1MunitionImpactType; // 0x590
    FGameplayTagContainer AOE1MunitionTagContainer; // 0x598
    UInteractionArchitectAsset* AOE1MunitionDataAsset; // 0x5b8
    AActor* AOE1TargetActor; // 0x5c0
    bool bAllowOverideAttackSocket; // 0x5c8
    bool bIsABlindManWeapon; // 0x5c9
    char pad_5ca[0xa6];
    static AEnemyAIWeapon* StaticClass();
    void TrackPointsEvent();
    void TrackPoints(FVector& InThrowLoc, FVector& InWieldLoc);
    void SetState(EEnemyAIWeaponState::Type& InState);
    void RangedNotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult& Hit);
    void PoweredUpStopEvent();
    void PoweredUpStartEvent();
    bool OverlapAttackCapsule_New(USceneComponent* OverlappedComponent, AActor* OtherActor, USceneComponent* OtherComponent, FHitResult SweepResult, FHitResult& OutHitResult);
    bool OverlapAttackCapsule(AActor* InVictim, FHitResult InHitResult, FEnemy_WeaponAttackOverlapData& OutOverlapData);
    void OnMunitionImpact(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData);
    void OnMunitionDestroyed(AMunitionType_Base* InMunitionInstance);
    void HandlePhysicsMunitionHit(EPhysicsMunitionHitType PhysicsMunitionHitType, FHitResult HitResult);
    FVector GetWieldImpactNormal(FVector& InNormal, AActor* InHitActor);
    FVector GetThrowImpactNormal(FVector& InNormal, AActor* InHitActor);
    EEnemyAIWeaponState::Type GetState();
    AMunitionType_Physics* GetMunition();
    AActor* GetAttackInstigator();
    void ForceStoreWeapon();
    void FireWeaponAOEMunitionNew(UClass* InMunitionActor, AActor* TargetActor, FVector InLocation, UInteractionArchitectAsset* InMunitionDataAsset, FName InMunitionImpactType, FGameplayTagContainer InMunitionTagContainer, float AOEDamage);
    void FireWeaponAOEMunition(UClass* InMunitionActor, AActor* TargetActor, FVector InLocation, UInteractionArchitectAsset* InMunitionDataAsset, FName InMunitionImpactType, FGameplayTagContainer InMunitionTagContainer, float AOEDamage);
    AMunitionType_Base* FireAtTarget(AActor* TargetPtr, APawn* WeaponOwnerPtr, float AccuracyOffset, float InDamage, float OverrideSpeed);
    void EnableWeaponEffects();
    void EnableTrackPoints(bool bEnable);
    void EnablePhysicsSimEvent(bool bEnable);
    AActor* DoDisarmOnOwner(FVector HitDirection, AActor* InInstigator);
    void DisableWeaponEffects();
    void BroadcastWeaponEvent(EEnemyAIWeapon_Event InEvent);
    void BroadcastWeapon_AnimEvent(FName InName);
}; // Size: 0x670
#pragma pack(pop)
