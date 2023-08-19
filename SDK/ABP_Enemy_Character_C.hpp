#pragma once
#include <cstdint>
#include "AEnemy_Character.hpp"
#include "ENPC_AudioState.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FMaterialSwapScalarParameter.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UWaterInteractionComponent;
class UParticleSystem;
class USkeletalMeshComponent;
class UAkAudioEvent;
class UDynamicBranchComponent;
class ASpellTool;
class UClass;
class ULootDropComponent;
class UBP_EnemyAI_C;
class UParticleSystemComponent;
class UNiagaraSystem;
struct FEnemy_ApparateActorData;
class UNiagaraComponent;
class AActor;
struct FEnemy_SplineSpawnActorData;
class AEnemy_SplineSpawnActor;
class ABP_Enemy_ApperateActor_C;
class AEnemy_ApparateActor;
class UInteractionArchitectAsset;
class UPrimitiveComponent;
class UEnemyAISpawnData;
class URepairComponent;
class UGeometryCollectionComponent;
class USpellToolRecord;
class UArrestoMomentumComponent;
#pragma pack(push, 1)
class ABP_Enemy_Character_C : public AEnemy_Character {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x22f0
    UWaterInteractionComponent* WaterInteraction; // 0x22f8
    UDynamicBranchComponent* DynamicBranch; // 0x2300
    ULootDropComponent* LootDrop; // 0x2308
    UBP_EnemyAI_C* BP_EnemyAI; // 0x2310
    char pad_2318[0x30];
    UAkAudioEvent* DeathDissolveAudioEvent; // 0x2348
    TArray<UParticleSystemComponent*> DeathDissolveEmitters; // 0x2350
    float ParticleFxContainerLifetime; // 0x2360
    char pad_2364[0x4];
    UClass* DeathDissolveSkinFx; // 0x2368
    UParticleSystem* DeathDissolveFlash; // 0x2370
    UNiagaraSystem* DeathDissolveSparks; // 0x2378
    UNiagaraSystem* DeathDissolveSparksBones; // 0x2380
    UClass* ParticleFxContainerClass; // 0x2388
    FTransform DefaultTransform; // 0x2390
    UClass* DeathExplodeSkinFx; // 0x23c0
    UNiagaraSystem* DeathExplodeSparksBones; // 0x23c8
    UNiagaraSystem* DeathExplodeSparks; // 0x23d0
    UParticleSystem* DeathExplodeFlash; // 0x23d8
    UNiagaraSystem* DeathDissolveShapeFX; // 0x23e0
    TArray<UNiagaraComponent*> DeathDissolveSystems; // 0x23e8
    char pad_23f8[0x10];
    UParticleSystem* CompanionCombatAUXFX; // 0x2408
    UParticleSystemComponent* CompanionCombatAUXEmitter; // 0x2410
    UClass* Protego_Skin_Fx_Strong; // 0x2418
    FMaterialSwapParameters Parameter_Values; // 0x2420
    FMaterialSwapParameters Parameter_Values_0; // 0x2470
    FMaterialSwapScalarParameter NewVar_0; // 0x24c0
    char pad_24cc[0x4];
    USkeletalMeshComponent* Mesh_0; // 0x24d0
    UNiagaraSystem* DeathDisintegrationVFX; // 0x24d8
    int32_t Death_customStencilValue; // 0x24e0
    char pad_24e4[0x4];
    UClass* SplineSpawnActorClass; // 0x24e8
    static ABP_Enemy_Character_C* StaticClass();
    bool DisallowArrestoMomentum();
    AActor* Disarm(AActor* Instigator, FVector HitDirection, float ScaleDisarmForce);
    AEnemy_SplineSpawnActor* SpawnSplineSpawnActor(FTransform SpawnTransform, FEnemy_SplineSpawnActorData& Data, UClass* SplineSmokeActor, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AEnemy_SplineSpawnActor* CallFunc_FinishSpawningActor_ReturnValue);
    AEnemy_ApparateActor* SpawnApparateActor(FTransform SpawnTransform, FEnemy_ApparateActorData& Data, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_Enemy_ApperateActor_C* CallFunc_FinishSpawningActor_ReturnValue);
    bool DescendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity);
    bool DisallowDescendo();
    bool ExpulsoStart(AActor* Instigator, FVector Location);
    bool DisallowAccio();
    bool DisallowDepulso();
    bool DisallowFlipendo();
    bool DisallowLevioso();
    bool DisallowWingardium();
    bool LeviosoChargedStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, FVector Velocity, bool InitiatedByPlayer, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection);
    bool AccioStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection);
    bool DepulsoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location);
    bool FlipendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location);
    bool LeviosoStart(AActor* Instigator, FVector Location, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects);
    bool WingardiumStart(ASpellTool* SpellTool, AActor* Instigator);
    bool StartFreeze(AActor* Instigator, float Amount);
    bool NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    bool Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    bool Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity, bool CallFunc_HasTag_ReturnValue);
    void DiseminateSpawnData(UEnemyAISpawnData* SpawnData);
    void OnFlipendoThrow(ASpellTool* SpellTool, FVector ThrowDirection, FVector ThrowVelocity, FVector AngularVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnLeviosoEnd(AActor* Instigator, bool InitiatedByPlayer);
    void OnLeviosoFailed(bool InitiatedByPlayer);
    void OnWingardiumEnd(AActor* Instigator);
    void OnWingardiumFailed();
    void OnWingardiumGhostStart(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets);
    void OnAttemptToFreeze();
    void OnFailedToFreeze();
    void OnThaw(AActor* Instigator);
    void OnAttemptToHeal();
    void OnAttemptToRepair();
    void OnBeginRepairing();
    void OnCriticalHealthReached();
    void OnDoneRepairing();
    void OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    void OnFailedToBeDestroyed();
    void OnFailedToBeHealed();
    void OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection);
    void OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection);
    void OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken);
    void OnHealed(float healAmount, UPrimitiveComponent* PrimComp);
    void ReceiveBeginPlay();
    void OnFlipendoFailed();
    void OnSpellIneffective(AActor* Instigator);
    void OnSpellTooWeak(AActor* Instigator);
    void OnSpellEffective(AActor* Instigator);
    void OnExpulsoThrow(FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void OnDepulsoThrow(ASpellTool* SpellTool, FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void AnimEvent(FName Name);
    void OnDepulsoFailed();
    void OnAccioThrow(ASpellTool* SpellTool, AActor* Instigator, FVector ThrowVelocity, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnAccioFailed();
    void NPC_Health_HUD_Event(AActor* Target, float InHealthChange, bool bIndicateHUD);
    void OnAccioEnd(AActor* Instigator, bool TransitioningToWingardium);
    void SpawnFinished(AActor* pActor);
    void OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation);
    void OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact);
    void AudioStateHeartbeat(ENPC_AudioState State);
    void OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection);
    void OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent);
    void OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation);
    void NewDeathFade();
    void ExecuteUbergraph_BP_Enemy_Character(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void OnCharacterHitBySpell__DelegateSignature(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult Hit, FVector ImpactDirection);
    void OnSpawnFinished__DelegateSignature();
    void OnZeroHealth__DelegateSignature();
    void OnDeath__DelegateSignature();
}; // Size: 0x24f0
#pragma pack(pop)
