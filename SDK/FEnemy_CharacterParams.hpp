#pragma once
#include <cstdint>
#include "EEnemyAIState.hpp"
#include "EEnemy_CharacterState.hpp"
#include "ENPC_GameContext.hpp"
#include "ENPC_PathSpec.hpp"
#include "ENPC_Spawn.hpp"
#include "ENPC_Tether.hpp"
#include "FEnemy_AttackGroup.hpp"
#include "FEnemy_InflictedDamageOverTimeData.hpp"
#include "FEnemy_JumpSplineSpawn.hpp"
#include "FEnemy_SpawnAsleep.hpp"
#include "FEnemy_SpawnFollowSpline.hpp"
#include "FEnemy_SpawnFreeze.hpp"
#include "FEnemy_TargetSelectionData.hpp"
#include "FNPC_OptimizationSettings.hpp"
#include "FNPC_ShowUI.hpp"
#include "FPerPlatformInt.hpp"
#include "FVector.hpp"
class AActor;
class APathNode;
class UEnemyAIAttackData;
class UEnemy_TargetSenseAsset;
class APerceptionPointArea;
#pragma pack(push, 1)
struct FEnemy_CharacterParams {
    ENPC_Spawn SpawnType; // 0x0
    char pad_1[0x7];
    FString SpawnInLocation; // 0x8
    TArray<AActor*> SpawnIgnoreActors; // 0x18
    EEnemy_CharacterState State; // 0x28
    char pad_29[0x3];
    float StationaryTimer; // 0x2c
    bool bOverrideShowUI; // 0x30
    char pad_31[0x3];
    FNPC_ShowUI ShowUI; // 0x34
    bool AllowBeacon; // 0x40
    char pad_41[0x7];
    TArray<FEnemy_SpawnFreeze> SpawnFreezeParams; // 0x48
    TArray<FEnemy_SpawnFollowSpline> SpawnSplineParams; // 0x58
    TArray<FEnemy_SpawnFollowSpline> SpawnSmokeSplineParams; // 0x68
    TArray<FEnemy_AttackGroup> AttackGroupParams; // 0x78
    TArray<FEnemy_SpawnAsleep> SpawnAsleepParams; // 0x88
    TArray<FEnemy_JumpSplineSpawn> SpawnJumpSplineParams; // 0x98
    APathNode* PathNodePtr; // 0xa8
    ENPC_PathSpec OverridePathSpec; // 0xb0
    bool bShutdownOptimizationAllowed; // 0xb1
    bool bOverrideOptimizationSettings; // 0xb2
    char pad_b3[0x1];
    FNPC_OptimizationSettings OverrideOptimizationSettings; // 0xb4
    bool bNotDamageableUntilDistanceEnabled; // 0xdc
    char pad_dd[0x3];
    float NotDamageableUntilDistance; // 0xe0
    ENPC_GameContext RequiredGameContext; // 0xe4
    bool bPerceptionEnable; // 0xe5
    char pad_e6[0x2];
    float PerceptionEnableTimer; // 0xe8
    bool bPerceptionDisabledUntilAttacked; // 0xec
    bool bOnPlayerTeamUntilAttacked; // 0xed
    bool bPlayerOnlyPerception; // 0xee
    bool bForcePlayerPerception; // 0xef
    bool bAllowForceWhenInDisillusionment; // 0xf0
    bool bExcludePlayerPerception; // 0xf1
    bool bReinforcementPlayerPerception; // 0xf2
    char pad_f3[0x1];
    float ForcePerceptionDistance; // 0xf4
    float ForcePerceptionTimeout; // 0xf8
    bool bExcludeFromPlayerRelTracking; // 0xfc
    bool bPlayCameraCutOnDeath; // 0xfd
    char pad_fe[0x2];
    UEnemy_TargetSenseAsset* OverrideTargetSenseAsset; // 0x100
    float TargetAwareStateRateScale; // 0x108
    bool bTargetAwareStateInstantAggro; // 0x10c
    bool bOverrideAlertUIRate; // 0x10d
    char pad_10e[0x2];
    float AlertUIRate; // 0x110
    bool bAggroBehaviorEnabled; // 0x114
    bool bLootDropEnable; // 0x115
    bool bPerceiveVolumeIgnoreWhenAware; // 0x116
    char pad_117[0x1];
    TArray<APerceptionPointArea*> PerceiveVolumeList; // 0x118
    TArray<APerceptionPointArea*> ForceTargetVolumeList; // 0x128
    bool bForceVolumeRequireLOS; // 0x138
    bool bForceVolumeRequireDistance; // 0x139
    char pad_13a[0x2];
    float ForceVolumeMaxDistance; // 0x13c
    TArray<APerceptionPointArea*> ForceTargetExcludeVolumeList; // 0x140
    TArray<APerceptionPointArea*> TeamateShareVolumeList; // 0x150
    TArray<APerceptionPointArea*> StayInVolumeList; // 0x160
    bool bCanRemoveStayInVolumes; // 0x170
    char pad_171[0x3];
    float StayInRadius; // 0x174
    float StayInVolumeTeleportTimeout; // 0x178
    bool bStayInVolumeOffNavTeleport; // 0x17c
    bool bOnlyKillIfNotInAnyAliveVolume; // 0x17d
    char pad_17e[0x2];
    TArray<APerceptionPointArea*> AliveVolumeList; // 0x180
    TArray<APerceptionPointArea*> KillVolumeList; // 0x190
    ENPC_Tether WanderTetherType; // 0x1a0
    char pad_1a1[0x3];
    float WanderTetherDist; // 0x1a4
    FVector WanderTetherLoc; // 0x1a8
    bool bDisableApparateToMove; // 0x1b4
    bool bDisableApparateIfUnreachableLoc; // 0x1b5
    bool bFacePlayerOnSpawn; // 0x1b6
    char pad_1b7[0x1];
    int32_t LevelScaleMinOverride; // 0x1b8
    int32_t LevelScaleMaxOverride; // 0x1bc
    int32_t LevelOffsetOverride; // 0x1c0
    FPerPlatformInt PerPlatformLevelOffsetOverride; // 0x1c4
    bool bSpawnActorDead; // 0x1c8
    bool bAllowsDeadSpawn; // 0x1c9
    bool bSpawnActorInjured; // 0x1ca
    bool bPlayCharacterVOonSpawn; // 0x1cb
    float ResetTime; // 0x1cc
    EEnemyAIState DisengageState; // 0x1d0
    bool bOverrideDeathEffects; // 0x1d1
    bool bDestroyOnDeath; // 0x1d2
    bool bDoDeathCamOnDeath; // 0x1d3
    bool bDoBulletTimeOnDeath; // 0x1d4
    bool bDissolveOnDeath; // 0x1d5
    bool bFadeOnDeath; // 0x1d6
    char pad_1d7[0x1];
    TArray<UEnemyAIAttackData*> ExcludeAttackList; // 0x1d8
    float RangeScale; // 0x1e8
    float DoDamageScale; // 0x1ec
    float DoDamageVsPlayerScale; // 0x1f0
    bool bUseAttackTicketOverride; // 0x1f4
    char pad_1f5[0x3];
    FString GlobalAttackTicketOverride; // 0x1f8
    bool bNumTicketsOverride; // 0x208
    char pad_209[0x3];
    int32_t NumTickets; // 0x20c
    bool bTicketCooldownOverride; // 0x210
    char pad_211[0x3];
    float TicketCooldown; // 0x214
    bool bAttackWithoutRestrictions; // 0x218
    bool bAlwaysMyTurn; // 0x219
    bool bNoAttackExecuteCooldown; // 0x21a
    bool bNoAttackSelectCooldown; // 0x21b
    char pad_21c[0x4];
    FEnemy_InflictedDamageOverTimeData InflictedDamageOverTimeData; // 0x220
    FEnemy_TargetSelectionData TargetSelectionData; // 0x230
    bool bPriorityWeightOverride; // 0x248
    char pad_249[0x3];
    float PriorityWeight; // 0x24c
    char pad_250[0x240];
}; // Size: 0x490
#pragma pack(pop)
