#pragma once
#include <cstdint>
#include "ECreatureAIState.hpp"
#include "ECreatureFleeFlyingOption.hpp"
#include "ECreatureIdleOverrideState.hpp"
#include "ECreatureMovementSpeed.hpp"
#include "ECreaturePathEndMode.hpp"
#include "ECreatureStance.hpp"
#include "ECreatureStoppingMode.hpp"
#include "FCreatureLookAtBehavior.hpp"
#include "FGameplayTagContainer.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UNPC_Component.hpp"
class ACreature_Character;
class UInteractionArchitectAsset;
class AActor;
class UCreature_NurtureComponent;
class ACreature_Controller;
class UCreatureSpawnSlotComponent;
class UBlackboardComponent;
class UClass;
class ACreaturePerceptionVolume;
class APathNode;
class ACreatureTetherVolume;
class UObject;
struct FMunitionImpactData;
class UAIPerceptionComponent;
struct FRotator;
#pragma pack(push, 1)
class UCreature_AIComponent : public UNPC_Component {
public:
    UInteractionArchitectAsset* IdleInteractionAsset; // 0x1ec0
    float TetherRadius; // 0x1ec8
    float FleeRange; // 0x1ecc
    float FleeRunDistance; // 0x1ed0
    float FleeJogDistance; // 0x1ed4
    float FleeWalkDistance; // 0x1ed8
    float FleePathingDistance; // 0x1edc
    float FleeScatterRadius; // 0x1ee0
    float FleeHerdRadius; // 0x1ee4
    AActor* FleeDestinationOverride; // 0x1ee8
    bool bFadeWhenFleeing; // 0x1ef0
    char pad_1ef1[0x3];
    float ReactionInstigatorTagTime; // 0x1ef4
    ECreatureFleeFlyingOption FleeFlyingOption; // 0x1ef8
    bool bIsFleeConstrainedByTether; // 0x1ef9
    ECreatureMovementSpeed MaximumFleeMovementSpeed; // 0x1efa
    char pad_1efb[0x1];
    FVector2D ApproachRange; // 0x1efc
    float TurnApproachRadius; // 0x1f04
    float TrotApproachRadius; // 0x1f08
    float RunApproachRadius; // 0x1f0c
    ECreatureStance InteractStance; // 0x1f10
    char pad_1f11[0x7];
    FGameplayTagContainer FeedAnimLookupTags; // 0x1f18
    FGameplayTagContainer PettingAnimLookupTags; // 0x1f38
    FName PettingBrushAttachRelativeBoneName; // 0x1f58
    float StartWithRestIdleBehaviorChance; // 0x1f60
    float StartWithRestIdleBehaviorAtNightChance; // 0x1f64
    float StartWithForageIdleBehaviorChance; // 0x1f68
    FVector2D ExploreRange; // 0x1f6c
    FVector2D ExploreRangeFromHerdLocation; // 0x1f74
    float MinExploreWaitTime; // 0x1f7c
    float MaxExploreWaitTime; // 0x1f80
    int32_t ExploreBehaviorLoopsMin; // 0x1f84
    int32_t ExploreBehaviorLoopsMax; // 0x1f88
    bool bTurnAnticipation; // 0x1f8c
    char pad_1f8d[0x3];
    FVector2D ForageRange; // 0x1f90
    int32_t ForageBehaviorLoopsMin; // 0x1f98
    int32_t ForageBehaviorLoopsMax; // 0x1f9c
    FVector2D ForageLookAroundTime; // 0x1fa0
    bool bCanForage; // 0x1fa8
    char pad_1fa9[0x3];
    float GroomOrLookAroundConsiderationMultiplier; // 0x1fac
    float GroomConsiderationMultiplier; // 0x1fb0
    int32_t RestBehaviorLoopsMin; // 0x1fb4
    int32_t RestBehaviorLoopsMax; // 0x1fb8
    float FlightPreferredThresholdDistance; // 0x1fbc
    bool bShouldFlyOutOfWater; // 0x1fc0
    char pad_1fc1[0x3];
    float CirclingConsiderationMultiplier; // 0x1fc4
    float CirclingWhenWildConsiderationBonus; // 0x1fc8
    float MinCirclingHeightAboveGround; // 0x1fcc
    float MaxCirclingHeightAboveGround; // 0x1fd0
    float MinCirclingRadiusMultiplier; // 0x1fd4
    float MaxCirclingRadiusMultiplier; // 0x1fd8
    float MinCirclingTime; // 0x1fdc
    float MaxCirclingTime; // 0x1fe0
    bool bCanUsePerches; // 0x1fe4
    char pad_1fe5[0x3];
    float PerchingConsiderationMultiplier; // 0x1fe8
    float PerchingWhenWildConsiderationBonus; // 0x1fec
    float MinPerchingSearchRadius; // 0x1ff0
    float MaxPerchingSearchRadius; // 0x1ff4
    float MinPerchingTime; // 0x1ff8
    float MaxPerchingTime; // 0x1ffc
    bool bIsPerchingConstrainedByTether; // 0x2000
    char pad_2001[0x3];
    float Laziness; // 0x2004
    bool bIsNocturnal; // 0x2008
    bool bCanUseHerding; // 0x2009
    char pad_200a[0x2];
    float InitialHerdDetectionRadius; // 0x200c
    bool bCanHerdSleep; // 0x2010
    bool bCanHerdFlee; // 0x2011
    char pad_2012[0x2];
    FVector2D NewHerdLocationRange; // 0x2014
    bool bCanGraze; // 0x201c
    char pad_201d[0x3];
    float GrazingMinRadius; // 0x2020
    float GrazingMaxRadius; // 0x2024
    float StationaryGrazingDuration; // 0x2028
    FVector2D RelaxStandingTime; // 0x202c
    FVector2D RelaxSittingTime; // 0x2034
    FVector2D RelaxLyingTime; // 0x203c
    FVector2D RelaxSleepingTime; // 0x2044
    float RelaxStandingConsiderationMultiplier; // 0x204c
    float RelaxSittingConsiderationMultiplier; // 0x2050
    float RelaxLyingConsiderationMultiplier; // 0x2054
    float RelaxSleepingConsiderationMultiplier; // 0x2058
    char pad_205c[0x4];
    TArray<ECreatureStance> PregnancyStances; // 0x2060
    float NurtureInteractCloseRange; // 0x2070
    float NurtureInteractRange; // 0x2074
    float NurtureInteractRangeHighHappinessMultiplier; // 0x2078
    FVector2D HappinessThresholds; // 0x207c
    float NurtureInteractGreetTimeInterval; // 0x2084
    bool bStationaryForNurtureInteract; // 0x2088
    char pad_2089[0x3];
    float CombatMaxDistanceFromTether; // 0x208c
    char pad_2090[0x30];
    UCreatureSpawnSlotComponent* CurrentCreatureSlot; // 0x20c0
    char pad_20c8[0x8];
    FCreatureLookAtBehavior LookAtBehavior; // 0x20d0
    char pad_2160[0x18];
    UBlackboardComponent* BlackboardComponent; // 0x2178
    char pad_2180[0x50];
    ACreature_Character* CreatureCharacter; // 0x21d0
    ACreature_Controller* CreatureController; // 0x21d8
    UCreature_NurtureComponent* NurtureComponent; // 0x21e0
    UClass* CustomAbilityClass; // 0x21e8
    char pad_21f0[0xc0];
    static UCreature_AIComponent* StaticClass();
    void TryEnterScheduledEntityMode();
    void TeamChanged();
    void StartFollowPathBehavior(APathNode* InPathNode);
    void SetToWalkMovementSpeed();
    void SetToSprintMovementSpeed();
    void SetToMovementSpeedFloat(float InSpeed);
    void SetToMovementSpeed(ECreatureMovementSpeed MovementSpeed);
    void SetToJogMovementSpeed();
    void SetTetherVolume(ACreatureTetherVolume* InTetherVolume);
    void SetStoppingMode(ECreatureStoppingMode StoppingMode);
    void SetPathEndMode(ECreaturePathEndMode PathEndMode);
    void SetInteractionTime(AActor* InTargetActor);
    void SetIdleOverrideState(ECreatureIdleOverrideState InNewState);
    void SetFocusActorBlackboardState(AActor* FocusActor);
    void SetDesiredCreatureStance(ECreatureStance InNewStance);
    void SetAIState(ECreatureAIState InNewState);
    void RemovePerceptionVolume(ACreaturePerceptionVolume* InPerceptionVolume);
    void RandomizeApproachRadius();
    void OnPerceptionUpdated(TArray<AActor*>& UpdatedActors);
    void OnObjectStateChange(UObject* InCaller, uint8_t InInteractiveAction);
    void OnMunitionImpactDamage(UObject* InCaller, FMunitionImpactData& InImpactData);
    void OnCreatureDied();
    void OnAIStateComplete();
    ACreatureTetherVolume* GetTetherVolume();
    UAIPerceptionComponent* GetPerceptionComponent();
    ECreaturePathEndMode GetPathEndMode();
    ECreatureIdleOverrideState GetIdleOverrideState();
    UClass* GetCustomAbilityClass();
    float GetCurrentApproachRadius();
    UBlackboardComponent* GetBlackboard();
    ECreatureMovementSpeed GetBestSpeedToReachLocation(FVector InLocation, float InTimeToReach);
    ECreatureAIState GetAIState();
    void FindPettingBrushInitialAttachment(FGameplayTagContainer& InAnimationVariationTagContainer, FVector& OutRelativeLocation, FRotator& OutRotation, FVector& OutScale);
    FTransform FindPettingBrushAttachmentRelativeTransform();
    bool ExecuteAbilityFromAsset(UInteractionArchitectAsset* InArchitectAsset);
    void EnableCreaturePerception();
    void DisableCreaturePerception(bool bForgetPreviousStimuli, bool bLoseAwareness);
    void AddPerceptionVolume(ACreaturePerceptionVolume* InPerceptionVolume);
}; // Size: 0x22b0
#pragma pack(pop)
