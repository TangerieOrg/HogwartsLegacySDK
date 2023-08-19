#pragma once
#include <cstdint>
#include "EEnemyAIAction.hpp"
#include "EEnemy_AttackTier.hpp"
#include "EEnemy_AttackType.hpp"
#include "EEnemy_BuffType_DEPRECATED.hpp"
#include "EEnemy_LimitAttackOnTarget.hpp"
#include "EEnemy_ParryMunitionType.hpp"
#include "EEnemy_SelectCooldownType.hpp"
#include "ENPC_GameAttackState.hpp"
#include "ENPC_GameContext.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FEnemy_ApparateToData.hpp"
#include "FEnemy_AttackRangeData.hpp"
#include "FEnemy_BallisticData.hpp"
#include "FEnemy_FlourishData.hpp"
#include "FEnemy_RunToData.hpp"
#include "FEnemy_WeaponAttackData.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UEnemyAIAttackBaseData.hpp"
class UClass;
class UEnemy_AttackExtraData;
class USpellToolRecord;
class UInteractionArchitectAsset;
class UMultiFX2_Base;
class UBehaviorTree;
class UEnemy_AttackChoice;
#pragma pack(push, 1)
class UEnemyAIAttackData : public UEnemyAIAttackBaseData {
public:
    bool bAttackDisable; // 0x68
    char pad_69[0x7];
    FDbSingleColumnInfo InstanceOverrideKey; // 0x70
    EEnemy_AttackType AttackType; // 0xf8
    EEnemy_ParryMunitionType ParryMunitionType; // 0xf9
    char pad_fa[0x2];
    FGameplayTag AttackTypeTag; // 0xfc
    bool bTicketRequired; // 0x104
    char pad_105[0x3];
    FDbSingleColumnInfo AttackTicket; // 0x108
    float TicketTimeoutOverride; // 0x190
    char pad_194[0x4];
    UClass* AttackAbilityPtr; // 0x198
    UEnemy_AttackExtraData* ExtraData; // 0x1a0
    USpellToolRecord* SpellToolRecord; // 0x1a8
    FName FireSocket; // 0x1b0
    UInteractionArchitectAsset* MunitionDataAsset; // 0x1b8
    FGameplayTagContainer MunitionTagContainer; // 0x1c0
    UBehaviorTree* AttackBehaviorTree; // 0x1e0
    UBehaviorTree* AttackSplitBehaviorTree; // 0x1e8
    UBehaviorTree* AttackCounterBehaviorTree; // 0x1f0
    EEnemyAIAction AttackCounterBehaviorAction; // 0x1f8
    char pad_1f9[0x3];
    float m_damage; // 0x1fc
    bool bUnblockable; // 0x200
    bool bCanDamageEvenAfterDodge; // 0x201
    char pad_202[0x6];
    FGameplayTagContainer DotMunitionTagContainer; // 0x208
    TArray<UMultiFX2_Base*> DotMultiFx; // 0x228
    float DotDamageTickRate; // 0x238
    float EnergyCost; // 0x23c
    bool bCanAttackWhenEnergyDrained; // 0x240
    bool bCannotAttackWhenTargetParrying; // 0x241
    bool bContinueMoveWhenAttackStarts; // 0x242
    char pad_243[0x1];
    int32_t NumSubAttacks; // 0x244
    float DistanceScale; // 0x248
    bool bCanWorldScale; // 0x24c
    bool bCanPerceptionPointVolumeScale; // 0x24d
    ENPC_GameAttackState GameAttackState; // 0x24e
    char pad_24f[0x1];
    FGameplayTagContainer SpellOverrideTagContainer; // 0x250
    bool bPairedWeapons; // 0x270
    char pad_271[0x7];
    UEnemy_AttackChoice* AttackChoice; // 0x278
    EEnemy_AttackTier SelectTier; // 0x280
    EEnemy_AttackTier OffNavSelectTier; // 0x281
    bool bRequirePathForPosAndAttack; // 0x282
    bool bRequireStraightLinePathForAttack; // 0x283
    bool bRequireStayInVolume; // 0x284
    char pad_285[0x3];
    float ProbabilityScale; // 0x288
    bool bImmediateAttackOnly; // 0x28c
    bool bCanChooseBetterAttack; // 0x28d
    char pad_28e[0x2];
    float CanChooseBetterAttackMovementMinTime; // 0x290
    bool bHeightDeltaRequirement; // 0x294
    char pad_295[0x3];
    float HeightRequirement; // 0x298
    bool bChooseAgainOnceInRange; // 0x29c
    char pad_29d[0x3];
    TArray<UEnemyAIAttackData*> InRangeChooseAgainList; // 0x2a0
    bool bCanChooseFromSplit; // 0x2b0
    bool bCanOnlyChooseFromSplit; // 0x2b1
    bool bCounterAttackAddContextTag; // 0x2b2
    char pad_2b3[0x5];
    FGameplayTagContainer RequiredTagContainer; // 0x2b8
    FGameplayTagContainer ExcludeTagContainer; // 0x2d8
    ENPC_GameContext RequiredGameContext; // 0x2f8
    ENPC_GameContext ExcludeGameContext; // 0x2f9
    char pad_2fa[0x6];
    TArray<ENPC_GameContext> ExcludeGameContextList; // 0x300
    ENPC_GameContext RequiredTargetGameContext; // 0x310
    ENPC_GameContext ExcludeTargetGameContext; // 0x311
    char pad_312[0x6];
    TArray<ENPC_GameContext> ExcludeTargetGameContextList; // 0x318
    float RandomWeight; // 0x328
    float SelectWeight; // 0x32c
    bool bAttackExcludeWeight; // 0x330
    EEnemy_SelectCooldownType SelectCooldownType; // 0x331
    char pad_332[0x2];
    float SelectCooldown; // 0x334
    float SelectCooldownDeviation; // 0x338
    float SelectCooldownIncrement; // 0x33c
    float SelectCooldownIncrementThreshold; // 0x340
    float SelectCooldownIncrementThresholdDeviation; // 0x344
    TArray<UEnemyAIAttackData*> SelectCooldownAttacks; // 0x348
    float SelectGroupCooldown; // 0x358
    int32_t MinTeammates; // 0x35c
    int32_t MaxTeammates; // 0x360
    char pad_364[0x4];
    FEnemy_WeaponAttackData WeaponData; // 0x368
    TArray<FEnemy_AttackRangeData> SelectionRangeData; // 0x398
    EEnemy_BuffType_DEPRECATED BuffType; // 0x3a8
    char pad_3a9[0x3];
    float BuffRadius; // 0x3ac
    float NeedBuffRatio; // 0x3b0
    bool bRequireGround; // 0x3b4
    char pad_3b5[0x3];
    float MinAttackAngle; // 0x3b8
    bool m_attackIfTooClose; // 0x3bc
    bool bCanApproach; // 0x3bd
    bool bCanRetreat; // 0x3be
    bool bCanMoveIfInRange; // 0x3bf
    bool bCanWaitIfNotInRange; // 0x3c0
    EEnemy_LimitAttackOnTarget LimitAttackOnTarget; // 0x3c1
    bool bStopReqPriorToAttack; // 0x3c2
    bool bExecutionRequiresLoS; // 0x3c3
    bool bRequireTeamateLOSForPos; // 0x3c4
    char pad_3c5[0x3];
    float MinRangedHeightDelta; // 0x3c8
    float MinMeleeHeightDelta; // 0x3cc
    float MinBallisticHeightDelta; // 0x3d0
    bool bRequireCorridorCheck; // 0x3d4
    char pad_3d5[0x3];
    float RequireLOSCorridorHalfWidth; // 0x3d8
    float RangedCorridorHalfWidth; // 0x3dc
    float RequireCorridorDist; // 0x3e0
    float RequireCorridorStartDist; // 0x3e4
    float RequireCorridorStopDist; // 0x3e8
    float Timeout; // 0x3ec
    float TimeoutDelta; // 0x3f0
    float AbortDeltaPlus; // 0x3f4
    float AbortDeltaMinus; // 0x3f8
    bool bCanAttackWhileTargetIsReacting; // 0x3fc
    bool bFlourishSplit; // 0x3fd
    char pad_3fe[0x2];
    TArray<FEnemy_FlourishData> FlourishData; // 0x400
    TArray<FEnemy_RunToData> RunToData; // 0x410
    TArray<FEnemy_ApparateToData> ApparateToData; // 0x420
    TArray<FEnemy_BallisticData> BallisticDataList; // 0x430
    TArray<UEnemyAIAttackData*> PossibleSplits; // 0x440
    bool bHoldTicketOnSplit; // 0x450
    bool bRetreatSplit; // 0x451
    bool bRetreat; // 0x452
    char pad_453[0x1];
    float RetreatMinDistFromTarget; // 0x454
    float RetreatMinTravelDist; // 0x458
    float RetreatThreshold; // 0x45c
    TArray<UMultiFX2_Base*> HitActorFX2; // 0x460
    TArray<UMultiFX2_Base*> BlockedActorFX2; // 0x470
    bool bIgnoreAttackWithTransientWeaponIfHasWeapon; // 0x480
    bool bCanReposition; // 0x481
    char pad_482[0xe];
    static UEnemyAIAttackData* StaticClass();
}; // Size: 0x490
#pragma pack(pop)
