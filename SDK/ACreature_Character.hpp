#pragma once
#include <cstdint>
#include "ANPC_Character.hpp"
#include "ECreatureAIInitialState.hpp"
#include "ECreatureCageAnimation.hpp"
#include "ECreatureFlightState.hpp"
#include "ECreatureLandingType.hpp"
#include "ECreatureMovementSpeed.hpp"
#include "ECreatureStoppingMode.hpp"
#include "FGameplayTagContainer.hpp"
#include "FOdcFlags.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class AActor;
class UAnimationComponent;
class UParticleSystem;
class UCreature_FlightMotionTable;
class UEnemyStateComponent;
class UCentaurCombatComponent;
class APathNode;
class UCreature_AIComponent;
class UCreature_NurtureComponent;
class UCreature_CombatComponentV2;
class UIcarus3DMovementComponent;
class UMercunaNavigationComponent;
class UFlightAnimationComponent;
class UCreature_MountComponent;
class UUprightAttachSceneComponent;
class UAkComponent;
#pragma pack(push, 1)
class ACreature_Character : public ANPC_Character {
public:
    char pad_2180[0x10];
    UAnimationComponent* AnimationComponent; // 0x2190
    UEnemyStateComponent* EnemyStateComponent; // 0x2198
    UCreature_FlightMotionTable* FlightMotionTable; // 0x21a0
    FOdcFlags PreferredAreaUsageFlags; // 0x21a8
    FOdcFlags FleeAreaUsageFlags; // 0x21ac
    FGameplayTagContainer IgnoredSpellImpactTypes; // 0x21b0
    bool bRecordLastReceivedAnimNotify; // 0x21d0
    char pad_21d1[0x2f];
    ECreatureAIInitialState StartState; // 0x2200
    bool bStartTame; // 0x2201
    char pad_2202[0x6];
    APathNode* StartPathNode; // 0x2208
    AActor* Cage; // 0x2210
    ECreatureCageAnimation CageAnimation; // 0x2218
    char pad_2219[0x7];
    UParticleSystem* SpawnVFX; // 0x2220
    bool bSpawnFlying; // 0x2228
    bool bSpawnPerched; // 0x2229
    char pad_222a[0xe];
    TArray<FName> AllowedColorVariationsOverride; // 0x2238
    bool bOverrideGender; // 0x2248
    bool bIsMaleOverride; // 0x2249
    char pad_224a[0x2];
    float RootMotionTranslationScale; // 0x224c
    ECreatureFlightState DesiredFlightState; // 0x2250
    ECreatureLandingType DesiredLandingType; // 0x2251
    char pad_2252[0x6];
    FGameplayTagContainer DesiredTakeoffAnimationTags; // 0x2258
    ECreatureStoppingMode DesiredStoppingMode; // 0x2278
    ECreatureStoppingMode ActualStoppingMode; // 0x2279
    ECreatureMovementSpeed DesiredMovementSpeed; // 0x227a
    char pad_227b[0x5];
    UCreature_AIComponent* CreatureAIComponent; // 0x2280
    UCreature_NurtureComponent* NurtureComponent; // 0x2288
    UCreature_CombatComponentV2* CombatComponent; // 0x2290
    UIcarus3DMovementComponent* FlightMovementComponent; // 0x2298
    UMercunaNavigationComponent* FlightNavigationComponent; // 0x22a0
    UFlightAnimationComponent* FlightAnimationComponent; // 0x22a8
    UCentaurCombatComponent* CentaurCombatComponent; // 0x22b0
    UCreature_MountComponent* MountComponent; // 0x22b8
    char pad_22c0[0x8];
    FGameplayTagContainer AnimationVariationTagContainer; // 0x22c8
    char pad_22e8[0xc8];
    FName CalloutAttachmentSocket; // 0x23b0
    char pad_23b8[0x8];
    FTransform CalloutLocalOffset; // 0x23c0
    FVector AlertCalloutLocalOffset; // 0x23f0
    bool bTestForAudioOcclusion; // 0x23fc
    char pad_23fd[0x3];
    int32_t MaxConcurrentAkComponents; // 0x2400
    int32_t MaxAkEventsPerFrame; // 0x2404
    char pad_2408[0x10];
    UUprightAttachSceneComponent* CreatedCalloutAttachComponent; // 0x2418
    UAkComponent* OcclusionAkComponent; // 0x2420
    TArray<UAkComponent*> FootstepAkComponents; // 0x2428
    UAkComponent* MotionAkComponent; // 0x2438
    TArray<UAkComponent*> VoxFoleyAkComponents; // 0x2440
    char pad_2450[0x40];
    static ACreature_Character* StaticClass();
    bool StartFire(float Amount, FVector Location);
    void ShowCreatureFollowScreen();
    void SetCanUseIdleBreaksDefaultValue(bool bValue);
    bool SetAvoidanceAgainst(AActor* Actor, bool bEnable);
    void OnFireExtinguished();
    void OnCompletelyCharred();
    bool IsActivePlayerMount();
    bool GetTrackerIsStationary();
    float GetTrackerAverageSpeed();
    UCreature_MountComponent* GetMountComponent();
    void ExecuteInitialIdleAbility();
    void ExecuteInitialFlyingAbility();
}; // Size: 0x2490
#pragma pack(pop)
