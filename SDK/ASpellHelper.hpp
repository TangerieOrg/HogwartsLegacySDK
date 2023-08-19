#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEnemyShieldBreaker.hpp"
#include "EImpactTypes.hpp"
#include "ERadialImpulseFalloff.hpp"
#include "FCastSpellData.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
class UClass;
class UToolSetComponent;
class USceneComponent;
struct FHitResult;
class UAkAudioEvent;
class URadialForceData;
class UInteractionArchitectAsset;
class USpellToolRecord;
class UParticleSystem;
class ASpellTool;
class AMunitionType_Base;
struct FDamageInfo;
class UMultiFX2Asset;
class UVelocityTrackerComponent;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ASpellHelper : public AActor {
public:
    UToolSetComponent* ToolSetComponent; // 0x248
    USceneComponent* DummyRoot; // 0x250
    TArray<URadialForceData*> RadialForceDataArray; // 0x258
    char pad_268[0x8];
    TArray<FCastSpellData> SpellCastArray; // 0x270
    static ASpellHelper* StaticClass();
    void UpdateSpellCast();
    static void TriggerReaction(AActor* TargetActor, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, FVector SourceLocation, AActor* InInstigator);
    static void TriggerNpcSpellResponse(AActor* InTarget, AActor* InInstigator, FVector& Location, float Radius, bool bAlwaysUseRadius);
    static bool SpellWillKillTarget(AActor* InTarget, AActor* InInstigator, USpellToolRecord* InSpellToolRecord, float& OutDamage);
    static void SetVelocityTrackerMinDamage(AActor* InTarget, float MinDamageDealt, float MinDamageDealtCharacter, float MixDamageTaken, float MixDamageTakenCharacter);
    static void SetVelocityTrackerMaxDamage(AActor* InTarget, float MaxDamageDealt, float MaxDamageDealtCharacter, float MaxDamageTaken, float MaxDamageTakenCharacter);
    static bool SetOnFire(AActor* Target, AActor* InInstigator, float Amount, FVector Location, float CharacterDuration, float OverrideDamagePerSecond);
    static bool SetFrozen(AActor* Target, AActor* InInstigator, FVector Location);
    static void Repair(AActor* Target, AActor* InInstigator);
    static void RemoveSpellEffect(AActor* Target, UClass* InRemoveEffect);
    static void RemoveLeviosoCountTracking(AActor* InOwner);
    static void RemoveFiniteCountTracking(AActor* InOwner);
    static void RemoveDeflectionComponent(AActor* InTarget);
    static void PreloadSpell(USpellToolRecord* SpellToolRecord);
    static void ObjectCanDamagePlayer(AActor* InTarget, AActor* InInstigator);
    static bool KillTarget(AActor* InTarget, AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, float InForce, float InDestructionForce, float InRadialDestructionForce, UParticleSystem* InDestroyPieceVFX, float InDestroyPieceVFXRadius, bool bSkipTakeAKnee, bool InNoReaction, bool bAlwaysKill, bool bNoCurseReflection);
    static bool Kill(AActor* Target, AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, FHitResult& HitResult, float InDestructionForce, float InRadialDestructionForce, UParticleSystem* InDestroyPieceVFX, float InDestroyPieceVFXRadius, bool bSkipTakeAKnee, bool InNoReaction);
    static void Heal(AActor* Target, float Health);
    static ASpellTool* GetSpellTool(USpellToolRecord* InSpellToolRecord);
    static AMunitionType_Base* FireMunition(USpellToolRecord* SpellToolRecord, FVector SourceLocation, FVector TargetLocation, AActor* InMunitionOwner, AActor* InInstigator);
    static bool FinisherWillKillTarget(AActor* InTarget, AActor* InInstigator, float Damage);
    static bool DoDamageTarget(AActor* InTarget, AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, FDamageInfo& OutDamageInfo, float InDamage, float InForce, bool bSendImpact, bool bIgnoreDamageThreshold, float InDestructionForce, float InRadialDestructionForce, UParticleSystem* InDestroyPieceVFX, float InDestroyPieceVFXRadius, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker, UAkAudioEvent* SFX, float InDuration, EImpactTypes InImpactType, bool bNoReaction, bool bForceNoReaction, ASpellTool* InSpellTool);
    static bool DoDamageOverTime(AActor* InTarget, AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, FName InDOTType, UMultiFX2Asset* MultiFX2, float InDamagePerSecond, float DurationInSeconds, float UpdateRate, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker);
    static bool DoDamageLocationDirection(AActor* InTarget, AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, FDamageInfo& OutDamageInfo, float InDamage, FVector InLocation, FVector InDirection, float InForce, bool bSendImpact, bool bIgnoreDamageThreshold, float InDestructionForce, float InRadialDestructionForce, UParticleSystem* InDestroyPieceVFX, float InDestroyPieceVFXRadius, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker, UAkAudioEvent* SFX, float InDuration, bool InNoReaction, EImpactTypes InImpactType, bool bForceNoReaction, ASpellTool* InSpellTool);
    static void DoDamageFinisher(AActor* InTarget, AActor* InInstigator, float Damage);
    static void DoDamageAOE(AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, float InDamage, FVector InLocation, float InRadius, float InForce, bool bSendImpact, bool bIgnoreDamageThreshold, float InRadialDestructionForce, UParticleSystem* InDestroyPieceVFX, float InDestroyPieceVFXRadius, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker, bool bOnlyHitCharacters, bool bIgnoreSameTeam, bool bIgnoreCompanions, bool bRespectInstigatorCanHit, UAkAudioEvent* SFX, float InDuration, EImpactTypes InImpactType, ASpellTool* InSpellTool);
    static bool DoDamage(AActor* Target, AActor* InInstigator, FGameplayTagContainer InMunitionTagContainer, TArray<UInteractionArchitectAsset*> InMunitionDataAssets, float Amount, FHitResult& HitResult, bool bSendImpact, bool bIgnoreDamageThreshold, float InDestructionForce, float InRadialDestructionForce, UParticleSystem* InDestroyPieceVFX, float InDestroyPieceVFXRadius, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker, UAkAudioEvent* SFX, float InDuration, bool InNoReaction, EImpactTypes InImpactType, ASpellTool* InSpellTool);
    static ASpellTool* CastSpellImmediate(AActor* Target, FVector SourceLocation, USpellToolRecord* SpellToolRecord, FVector TargetLocation, AActor* InInstigator, bool bCharged, float Duration, bool bPlayMuzzleFX, bool bPlayImpactFX, bool bHideProjectile, bool bInDebug, int32_t SpellLevel, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker, bool bTriggerCastAnim, bool bOnlyHitTarget, bool bHoming, bool bRespectLock, float damageOverride);
    static bool CastSpell(AActor* Target, FVector SourceLocation, USpellToolRecord* SpellToolRecord, FVector TargetLocation, AActor* InInstigator, bool bCharged, float Duration, bool bPlayMuzzleFX, bool bPlayImpactFX, bool bHideProjectile, bool bInDebug, int32_t SpellLevel, bool bPlayerShieldBreaker, EEnemyShieldBreaker EnemyShieldBreaker, bool bTriggerCastAnim, bool bOnlyHitTarget, bool bHoming, bool bRespectLock);
    static float CalculateTimeToReachDestination(USpellToolRecord* SpellToolRecord, FVector SourceLocation, FVector TargetLocation);
    static bool ApplyWetness(AActor* Target, AActor* InInstigator, float Amount, FVector Location);
    static void ApplySpellEffectFromPlayer(AActor* Target, USpellToolRecord* SpellToolRecord, float Duration);
    static void ApplyRadialForceWithIgnore(FVector Location, float Impulse, TArray<AActor*>& ActorsToIgnore, float MassScaledImpulse, float Radius, ERadialImpulseFalloff Falloff, bool bVelChange, float Delay);
    static void ApplyRadialForceToComponent(UPrimitiveComponent* InComp, FVector Location, float Impulse, float MassScaledImpulse, float Radius, ERadialImpulseFalloff Falloff, bool bVelChange, float Delay);
    static void ApplyRadialForceToActor(AActor* InActor, FVector Location, float Impulse, float MassScaledImpulse, float Radius, ERadialImpulseFalloff Falloff, bool bVelChange, float Delay);
    static void ApplyRadialForce(FVector Location, float Impulse, float MassScaledImpulse, float Radius, ERadialImpulseFalloff Falloff, bool bVelChange, float Delay);
    static void AddVelocityTrackerTag(AActor* InTarget, FName Tag);
    static UVelocityTrackerComponent* AddVelocityTracker(AActor* Target, AActor* InInstigator, float InLifetime, bool InRemoveWhenStopped, bool InFalling);
    static void AddDeflectionComponent(AActor* InTarget);
    static void AddCombatCursed(AActor* InTarget, AActor* InInstigator);
}; // Size: 0x280
#pragma pack(pop)
