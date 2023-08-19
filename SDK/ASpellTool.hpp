#pragma once
#include <cstdint>
#include "ATool.hpp"
#include "EAttackState\Type.hpp"
#include "EGameEventLocation.hpp"
#include "EGameEvent_Intensity.hpp"
#include "EImpactTypes.hpp"
#include "ELeftArmState\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "ESpellCategory.hpp"
#include "ESpellUpgrades.hpp"
#include "FAbilityFunction.hpp"
#include "FBTCustomAction.hpp"
#include "FGameplayTagContainer.hpp"
#include "FImpactLevelData.hpp"
#include "FVector.hpp"
class UInteractionArchitectAsset;
class UMultiFX2_Base;
class UMaterialInterface;
class UAblReactionData;
class USceneComponent;
class UAkAudioEvent;
struct FHitResult;
class UClass;
class AMunitionType_Base;
class AActor;
class ULEDFadeEffect;
class UActorComponent;
class UTriggerEffect;
class UAkComponent;
class UAblReactionComponent;
struct FMunitionImpactData;
class USpellToolRecord;
class AWandTool;
class ACharacter;
#pragma pack(push, 1)
class ASpellTool : public ATool {
public:
    FBTCustomAction SpellStartAction; // 0x2e0
    FBTCustomAction SpellStopAction; // 0x2ec
    char pad_2f8[0x50];
    bool bHeavyCast; // 0x348
    ELeftArmState::Type LeftArmState; // 0x349
    ERightArmState::Type RightArmState; // 0x34a
    char pad_34b[0x5];
    TArray<UMultiFX2_Base*> PrepMuzzleFX2; // 0x350
    UAkAudioEvent* PrepMuzzleMotionFX; // 0x360
    bool bKillPrepFXWhenMuzzleFXStart; // 0x368
    char pad_369[0x7];
    TArray<UMultiFX2_Base*> MuzzleFX2; // 0x370
    UAkAudioEvent* MuzzleMotionFX; // 0x380
    UAkAudioEvent* EndMuzzleMotionFX; // 0x388
    TArray<UMultiFX2_Base*> ProjectileFiredFX2; // 0x390
    bool ProjectileFiredFX2EndsWithMunition; // 0x3a0
    char pad_3a1[0x7];
    UAkAudioEvent* ProjectileMotionFX; // 0x3a8
    UAkAudioEvent* ProjectileSfx; // 0x3b0
    TArray<FImpactLevelData> ImpactLevelDataArray; // 0x3b8
    bool PlaceDecal; // 0x3c8
    char pad_3c9[0x7];
    UMaterialInterface* DecalMaterial; // 0x3d0
    FVector DecalSize; // 0x3d8
    float DecalFadeInDelay; // 0x3e4
    float DecalFadeInTime; // 0x3e8
    float DecalLifeSpan; // 0x3ec
    float DecalFadeTime; // 0x3f0
    bool DecalRandomOrientation; // 0x3f4
    char pad_3f5[0x3];
    UClass* Decal3D; // 0x3f8
    bool Decal3DRandomOrientation; // 0x400
    char pad_401[0x7];
    TArray<UMultiFX2_Base*> DestroyedPieceFX2; // 0x408
    float DestroyedPieceFXRadius; // 0x418
    EGameEventLocation GameEventLocation; // 0x41c
    char pad_41d[0x3];
    FGameplayTagContainer GameEventTagContainer; // 0x420
    EGameEvent_Intensity GameEventIntensity; // 0x440
    char pad_441[0x3];
    float GameEventDuration; // 0x444
    float GameEventRange; // 0x448
    float GameEventFalloff; // 0x44c
    FName DatabaseName; // 0x450
    FGameplayTagContainer MunitionTagContainer; // 0x458
    UInteractionArchitectAsset* MunitionDataAsset; // 0x478
    FGameplayTagContainer EndMunitionTagContainer; // 0x480
    EAttackState::Type AttackState; // 0x4a0
    char pad_4a1[0x7];
    UClass* SpellImpactComponent; // 0x4a8
    FGameplayTagContainer GameplayStateTags; // 0x4b0
    TArray<UMultiFX2_Base*> StateEffectFX2; // 0x4d0
    TArray<UClass*> TerminatePreviousEffects; // 0x4e0
    bool bEnableCCDOnTarget; // 0x4f0
    char pad_4f1[0x3];
    float PreSpawnMunitionDelay; // 0x4f4
    bool bActivateAllPerks; // 0x4f8
    char pad_4f9[0x7];
    TArray<FAbilityFunction> AbilityFunctions; // 0x500
    bool bAoe; // 0x510
    bool bAOEAtTargetLocation; // 0x511
    bool bAffectTeammates; // 0x512
    bool bOnlyAffectsMovable; // 0x513
    bool bCanAffectBroken; // 0x514
    bool bCanAffectPlayer; // 0x515
    bool bSetWandCastTargetTrackers; // 0x516
    char pad_517[0x1];
    TArray<UClass*> DeflectMunitionActors; // 0x518
    bool SpawnAllDeflectMunitionActors; // 0x528
    char pad_529[0xb];
    bool bPlayersUseImprovedTargeting; // 0x534
    char pad_535[0x3];
    UClass* SpellActiveTriggerEffect; // 0x538
    UClass* PrepLEDEffect; // 0x540
    UClass* StartLEDEffect; // 0x548
    UClass* EndLEDEffect; // 0x550
    char pad_558[0x20];
    AActor* OverrideSourceActor; // 0x578
    AActor* OverrideTargetActor; // 0x580
    USceneComponent* OverrideTargetComponent; // 0x588
    AActor* OverrideCharacter; // 0x590
    TArray<AMunitionType_Base*> CachedMunitionArray; // 0x598
    char pad_5a8[0x98];
    UInteractionArchitectAsset* LevelDataAsset; // 0x640
    char pad_648[0x98];
    UActorComponent* ImpactComponent; // 0x6e0
    char pad_6e8[0xd8];
    UTriggerEffect* pSpellActiveTriggerEffect; // 0x7c0
    bool bAffectsRightTrigger; // 0x7c8
    bool bAffectsLeftTrigger; // 0x7c9
    char pad_7ca[0x6];
    ULEDFadeEffect* pPrepLEDEffect; // 0x7d0
    ULEDFadeEffect* pStartLEDEffect; // 0x7d8
    ULEDFadeEffect* pEndLEDEffect; // 0x7e0
    UAkComponent* ProjectileAkComponent; // 0x7e8
    static ASpellTool* StaticClass();
    void TriggerReleased(bool bForce, bool bFromStop);
    void StopActive();
    void StartCooldown(AActor* TargetedActor);
    void StartChannelingAction();
    bool Start();
    void SpellFlourish();
    void SetIgnoreActors(TArray<AActor*> i_Ignores);
    void SetDestinationActor(AActor* InActor);
    void SetAffectImmuneToSpells(bool bAffectImmune);
    static void ReassignBeamTarget(AActor* CurrentActor, USceneComponent* NewComponent);
    void ReactionStart(UAblReactionData* InReactionData, UAblReactionComponent* ReactionComponent);
    void ReactionEnd(UAblReactionData* InReactionData, UAblReactionComponent* ReactionComponent);
    void PreSpawnMunition();
    void Prep();
    void PlayHitActorFX(FHitResult& HitResult);
    void OwnerHasStartedCasting(FName WandCastName);
    void OnStop();
    void OnStart();
    void OnProtegoBlocked(AMunitionType_Base* InMunitionInstance, AActor* Target, FHitResult& Hit, FVector ImpactDirection);
    void OnPrep();
    void OnMunitionOverlap(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData);
    void OnMunitionImpactDamage(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData);
    void OnMunitionImpact(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData);
    void OnMunitionFired(AActor* Target, FVector TargetLocation, AMunitionType_Base* BaseMunition, FGameplayTagContainer& InMunitionTagContainer);
    void OnMunitionDestroyed(AMunitionType_Base* InMunitionInstance);
    void OnFizzle();
    void OnCastSpell(AActor* Target, FVector& Location, FVector& MuzzleLocation);
    void OnCanAffectTarget(AActor* Target, bool bInCanAffectTarget);
    void OnAffectTarget(AActor* Target, USceneComponent* Component, bool bInTargetAffected);
    bool IsToolUsedByPlayer();
    bool IsStopped();
    bool IsStarted_K2();
    bool IsChanneling();
    bool IsBeastCaptureSpell();
    bool HasUpgradedMechanics();
    bool HasUpgrade(ESpellUpgrades Upgrade);
    AWandTool* GetWand();
    FName GetSpellType();
    USpellToolRecord* GetSpellToolRecord();
    ESpellCategory GetSpellCategory();
    AActor* GetSourceActor();
    float GetProjectileSpeed();
    FVector GetMuzzleLocation();
    UClass* GetMunitionActor();
    float GetMaxRange();
    EImpactTypes GetImpactType();
    UClass* GetExecutionClassFromKeyWord(FName KeyWord);
    float GetDuration(bool bTargetIsACharacter);
    AActor* GetCharacterActor();
    ACharacter* GetCharacter();
    AActor* GetActiveTarget();
    AMunitionType_Base* GetActiveMunition();
    void ForceStop();
    void FireOnHitBySpell(AActor* InTargetActor, AActor* InInstigator, FGameplayTagContainer& InMunitionTagContainer, FHitResult& HitResult, FVector& ImpactDirection);
    void Failed_K2();
    void EndToggleSpell(bool bForcedExternally);
    UActorComponent* CreateImpactComponent(AActor* InTargetActor, FMunitionImpactData& InMunitionImpactData);
    float CalculateCharacterDamage(AActor* InTarget, bool& OutWillKillTarget);
    static bool BreaksShield(AActor* Target, FGameplayTagContainer& InTagContainer);
    void Abort();
}; // Size: 0x7f0
#pragma pack(pop)
