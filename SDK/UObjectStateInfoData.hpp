#pragma once
#include <cstdint>
#include "FCooldownPickupData.hpp"
#include "FCooldownPickupImpulse.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHealingFX.hpp"
#include "FPhysicsReactionGroup.hpp"
#include "FVector.hpp"
#include "UDataAsset.hpp"
class UCurveFloat;
class UClass;
class UInteractionArchitectAsset;
class UMultiFX2_Base;
class UParticleSystem;
class UAkAudioEvent;
class UMaterialPropertyData;
class UDataTable;
class UGameplayPropertyMod;
class UFieldSystem;
#pragma pack(push, 1)
class UObjectStateInfoData : public UDataAsset {
public:
    bool bShowDebug; // 0x30
    bool DebugObjectStateDiagnosis; // 0x31
    char pad_32[0x6];
    UClass* ObjectStateDiagnosisActorClass; // 0x38
    float BumpSoundThreshold; // 0x40
    float ImpulseIgnoreThreshold; // 0x44
    char pad_48[0x4];
    float RagdollImpulseIgnoreThreshold; // 0x4c
    char pad_50[0x4];
    float ChaosImpulseMultiplier; // 0x54
    float ImpulseDamageDivider; // 0x58
    float ImpactDamageThreshold; // 0x5c
    float ObjectToCharacterVelocityThreshold; // 0x60
    float CharacterToCharacterVelocityThreshold; // 0x64
    float BecomeMovableDamageThreshold; // 0x68
    float BecomeMovableVelocityThreshold; // 0x6c
    float CharacterVelocityScale; // 0x70
    float CharacterDamageScale; // 0x74
    float CharacterToCharacterDamageScale; // 0x78
    char pad_7c[0x4];
    FGameplayTagContainer CharacterCanBeDamagedStates; // 0x80
    FGameplayTagContainer CharacterCanDealDamageStates; // 0xa0
    float PlayerVelocityScale; // 0xc0
    float PlayerDamageScale; // 0xc4
    float LevelLoadedImpactIgnoreTime; // 0xc8
    float SpawnedImpactIgnoreTime; // 0xcc
    float ResetImpactIgnoreTime; // 0xd0
    float CharacterStaticPhysicsHitIgnoreTime; // 0xd4
    float OppugnoVelocityScale; // 0xd8
    float OppugnoLaunchAngleMax; // 0xdc
    float MaxMassDamagePercent; // 0xe0
    float MaxHealthDamagePercent; // 0xe4
    float MassContributionToDamage; // 0xe8
    float HighPostImpactVelocityThreshold; // 0xec
    float DestroyedVelocityScaleXY; // 0xf0
    float DestroyedVelocityScaleZ; // 0xf4
    float DestroyedVelocityScaleMin; // 0xf8
    char pad_fc[0x4];
    TArray<UMultiFX2_Base*> PhysicsHitFX2; // 0x100
    UInteractionArchitectAsset* PhysicsMunitionDataAsset; // 0x110
    FGameplayTag PhysicsMunitionTag; // 0x118
    float PhysicsFloorBounceDegreesFromVerticalThreshold; // 0x120
    float PhysicsWallBounceDegreesFromHorizontalThreshold; // 0x124
    float PhysicsWallBounceVelocityThreshold; // 0x128
    FGameplayTag PhysicsWallBounceMunitionTag; // 0x12c
    char pad_134[0x4];
    TArray<FPhysicsReactionGroup> PhysicsHitArray; // 0x138
    float PhysicsHitFromAboveThreshold; // 0x148
    FGameplayTag PhysicsHitFromAboveMunitionTag; // 0x14c
    float PhysicsHitFromBelowThreshold; // 0x154
    FGameplayTag PhysicsHitFromBelowMunitionTag; // 0x158
    UInteractionArchitectAsset* DefaultMunitionDataAsset; // 0x160
    UInteractionArchitectAsset* SendMunitionDataAsset; // 0x168
    float MinDamageOnVelocityTrackedCollision; // 0x170
    float MaintainVelocityTime; // 0x174
    float AccioGroundHitZThreshold; // 0x178
    float AdditionalCommonBreakableCollisionDamage; // 0x17c
    float IgnoreFallDamageTimeAfterSpawn; // 0x180
    char pad_184[0x4];
    UCurveFloat* CurveHeightDamage; // 0x188
    float VelocityTransferPercent; // 0x190
    float ImpactIngoreTime; // 0x194
    UClass* ImpactCameraShake; // 0x198
    float ImpactCameraShakeDamageThreshold; // 0x1a0
    float ImpactCameraShakeVelocityThreshold; // 0x1a4
    float ImpactCameraShakeInnerRadius; // 0x1a8
    float ImpactCameraShakeOuterRadius; // 0x1ac
    float ImpactCameraShakeFalloff; // 0x1b0
    float ImpactCameraShakeBaseDamage; // 0x1b4
    float ImpactCameraShakeScale; // 0x1b8
    float ImpactCameraShakeScaleMin; // 0x1bc
    float ImpactCameraShakeScaleMax; // 0x1c0
    char pad_1c4[0x4];
    UAkAudioEvent* ImpactControllerVibration; // 0x1c8
    float VulnerableTagDamageScale; // 0x1d0
    float InReactionDamageIncrease; // 0x1d4
    float InReactionDamageMultiplier; // 0x1d8
    char pad_1dc[0x4];
    UDataTable* ClassSizeData; // 0x1e0
    UParticleSystem* SteamEffectPS; // 0x1e8
    UInteractionArchitectAsset* FireDamageMunitionDataAsset; // 0x1f0
    FGameplayTagContainer FireDamageTags; // 0x1f8
    UClass* OnFireCharacterAOE; // 0x218
    float FireDamageFloorPercent; // 0x220
    char pad_224[0x4];
    TArray<UMultiFX2_Base*> FrozenExtraDamageFX2; // 0x228
    float ActivateRange; // 0x238
    float DeactivateRange; // 0x23c
    UMaterialPropertyData* DefaultMaterialPropertyData; // 0x240
    TArray<UClass*> NoTrackingBaseClasses; // 0x248
    char pad_258[0x50];
    TArray<UClass*> HealingRemoveEffects; // 0x2a8
    FGameplayTagContainer HealingRemoveGameplayStateTags; // 0x2b8
    TArray<FHealingFX> HealingFXArray; // 0x2d8
    float DamageInPiecesAmountMultiplier; // 0x2e8
    float DamageInPiecesMaxAmount; // 0x2ec
    float DamageInPiecesImpulseMax; // 0x2f0
    float DamageInPiecesImpulseMultiplier; // 0x2f4
    float DamageInPiecesHealthZeroScale; // 0x2f8
    float DamageInPiecesHealthZeroRadius; // 0x2fc
    float NearDeathKneelInvulnerableTime; // 0x300
    float KneelingHealth; // 0x304
    float NonCombatKneelingRecoveryTime; // 0x308
    float CreatureKneelingRecoveryTime; // 0x30c
    float RecoverHealthPercent; // 0x310
    char pad_314[0x4];
    int64_t TimeInInfirmary; // 0x318
    UClass* ProtectionActor; // 0x320
    TArray<UMultiFX2_Base*> BeamAwayFX2; // 0x328
    TArray<UClass*> KneelingRemoveEffects; // 0x338
    float DestroyImpulseMultiplier; // 0x348
    float DestroyImpulseMax; // 0x34c
    float DestroyNonSpellImpulseMultiplier; // 0x350
    float BreakMeshVelocityThreshold; // 0x354
    float BreakMeshVelocityMultiplier; // 0x358
    float DestroyCenterOfObjectRadius; // 0x35c
    float DestroyNonSpellRadius; // 0x360
    float LargeChunkThreshold; // 0x364
    float ThrowDeadCharacterThreshold; // 0x368
    float DestroyVelocityScale; // 0x36c
    TArray<UClass*> DestroyedTerminateStateEffects; // 0x370
    float OverkillPercent; // 0x380
    float PlayerOverkillPercent; // 0x384
    UClass* LootDropContainer; // 0x388
    UClass* LootDropContainerOnlyCoins; // 0x390
    FVector LootDropImpulse; // 0x398
    FVector LootDropAngularImpulse; // 0x3a4
    float DisableChunkTime; // 0x3b0
    float DisableChunkLinearSpeed; // 0x3b4
    float DisableChunkLinearSpeedFrameMultiplier; // 0x3b8
    float DisableChunkAngularSpeed; // 0x3bc
    float DisableChunkAngularSpeedFrameMultiplier; // 0x3c0
    int32_t DisableChunkSlowFrames; // 0x3c4
    int32_t DisableChunkAfterFrames; // 0x3c8
    char pad_3cc[0x4];
    UClass* DestroyCameraShake; // 0x3d0
    float DestroyCameraShakeInnerRadius; // 0x3d8
    float DestroyCameraShakeOuterRadius; // 0x3dc
    float DestroyCameraShakeFalloff; // 0x3e0
    float DestroyCameraShakeBaseMass; // 0x3e4
    float DestroyCameraShakeScale; // 0x3e8
    float DestroyCameraShakeScaleMin; // 0x3ec
    float DestroyCameraShakeScaleMax; // 0x3f0
    char pad_3f4[0x4];
    UAkAudioEvent* DestroyControllerVibration; // 0x3f8
    float CursedReflectedPercent; // 0x400
    float CursedDamageMultiplier; // 0x404
    float CursedDuration; // 0x408
    float LongTalentCursedDuration; // 0x40c
    TArray<UMultiFX2_Base*> CombatCursedActivateFX2; // 0x410
    TArray<UMultiFX2_Base*> CombatCursedFlairFX2; // 0x420
    UGameplayPropertyMod* CursedAllyDamageMod; // 0x430
    TArray<UMultiFX2_Base*> HiddenFX2; // 0x438
    float StartFastSpeed; // 0x448
    float EndFastSpeed; // 0x44c
    float TimeBeforeSlowSpeedCheckBegins; // 0x450
    float SlowSpeedThreshold; // 0x454
    int32_t SlowFramesBeforeTrackingEnd; // 0x458
    char pad_45c[0x4];
    UFieldSystem* AnchorFieldSystem; // 0x460
    UClass* AnchorFieldSystemClass; // 0x468
    TArray<FCooldownPickupData> CooldownPickupArray; // 0x470
    TArray<FCooldownPickupImpulse> CooldownPickupImpulseArray; // 0x480
    float CooldownPickupImpulseScaleLEnemy; // 0x490
    float CooldownPickupImpulseScaleXLEnemy; // 0x494
    float CooldownPickupLifetime; // 0x498
    float CooldownPickupTargetingTimeMin; // 0x49c
    float CooldownPickupTargetingTimeMax; // 0x4a0
    char pad_4a4[0x4];
    static UObjectStateInfoData* StaticClass();
}; // Size: 0x4a8
#pragma pack(pop)
