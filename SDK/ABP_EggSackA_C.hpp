#pragma once
#include <cstdint>
#include "ASpiderWeb_EggSack.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UTargetComponent;
class UParticleSystemComponent;
class UCognitionStimuliSourceComponent;
class UCapsuleComponent;
class AActor;
class UObjectStateComponent;
class ASpellTool;
class UInteractionArchitectAsset;
class UPrimitiveComponent;
class USpellToolRecord;
class UIncendioComponent;
class URepairComponent;
class UGeometryCollectionComponent;
class UNiagaraComponent;
class UPhysicalMaterial;
#pragma pack(push, 1)
class ABP_EggSackA_C : public ASpiderWeb_EggSack {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x380
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x388
    UParticleSystemComponent* Flames; // 0x390
    UTargetComponent* Target; // 0x398
    UCapsuleComponent* Capsule; // 0x3a0
    UObjectStateComponent* ObjectState; // 0x3a8
    char pad_3b0[0x60];
    static ABP_EggSackA_C* StaticClass();
    bool StartFreeze(AActor* Instigator, float Amount);
    bool AccioStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection);
    bool DepulsoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    bool DescendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity);
    bool DisallowAccio();
    bool DisallowDepulso();
    bool DisallowDescendo();
    bool DisallowFlipendo();
    bool DisallowLevioso();
    bool DisallowWingardium();
    bool ExpulsoStart(AActor* Instigator, FVector Location);
    bool FlipendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    bool LeviosoChargedStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, FVector Velocity, bool InitiatedByPlayer, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    bool LeviosoStart(AActor* Instigator, FVector Location, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects);
    bool WingardiumStart(ASpellTool* SpellTool, AActor* Instigator);
    bool DecreaseFire(float decreaseAmount);
    bool IncreaseFire(float increaseAmount, FVector Location);
    bool IsPointOnFire(FVector Point, bool& OnFire);
    bool StartFire(float Amount, FVector Location);
    bool NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    bool Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    bool Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    void OnAttemptToFreeze();
    void OnFailedToFreeze();
    void OnAccioFailed();
    void OnAccioThrow(ASpellTool* SpellTool, AActor* Instigator, FVector ThrowVelocity, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnDepulsoFailed();
    void OnDepulsoThrow(ASpellTool* SpellTool, FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnExpulsoThrow(FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnFlipendoFailed();
    void OnFlipendoThrow(ASpellTool* SpellTool, FVector ThrowDirection, FVector ThrowVelocity, FVector AngularVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnLeviosoEnd(AActor* Instigator, bool InitiatedByPlayer);
    void OnLeviosoFailed(bool InitiatedByPlayer);
    void OnWingardiumFailed();
    void OnWingardiumGhostStart(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets);
    void OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection);
    void OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact);
    void OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation);
    void OnSpellEffective(AActor* Instigator);
    void OnSpellIneffective(AActor* Instigator);
    void OnSpellTooWeak(AActor* Instigator);
    void OnAttemptToSetOnFire(FVector Location);
    void OnCaughtFire(UIncendioComponent* IncendioComponent);
    void OnCompletelyCharred();
    void OnFailedToLight();
    void OnFireExtinguished();
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
    void SpawnEnemySpiders();
    void SpawnLoot();
    void SpawnDBObject();
    void ExplodeSack();
    void BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit);
    void OnAccioEnd(AActor* Instigator, bool TransitioningToWingardium);
    void ReceiveBeginPlay();
    void BreakEvent(float Delay, bool bExplode);
    void OnWingardiumEnd(AActor* Instigator);
    void OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void AccioBreak();
    void OnThaw(AActor* Instigator);
    void ExecuteUbergraph_BP_EggSackA(int32_t EntryPoint, UInteractionArchitectAsset* Temp_object_Variable, bool Temp_bool_Has_Been_Initd_Variable, ASpellTool* K2Node_Event_SpellTool_7, AActor* K2Node_Event_Instigator_16, FVector K2Node_Event_ThrowVelocity_3, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_5, FGameplayTagContainer K2Node_Event_Impact_6, ASpellTool* K2Node_Event_SpellTool_6, FVector K2Node_Event_ThrowVelocity_2, FVector K2Node_Event_Target_2, AActor* K2Node_Event_Instigator_15, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_4, FGameplayTagContainer K2Node_Event_Impact_5, FVector K2Node_Event_ThrowVelocity_1, FVector K2Node_Event_Target_1, AActor* K2Node_Event_Instigator_14, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_3, FGameplayTagContainer K2Node_Event_Impact_4, ASpellTool* K2Node_Event_SpellTool_5, FVector K2Node_Event_ThrowDirection, FVector K2Node_Event_ThrowVelocity, FVector K2Node_Event_AngularVelocity, FVector K2Node_Event_Target, AActor* K2Node_Event_Instigator_13, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_2, FGameplayTagContainer K2Node_Event_Impact_3, AActor* K2Node_Event_Instigator_12, bool K2Node_Event_InitiatedByPlayer_1, bool K2Node_Event_InitiatedByPlayer, ASpellTool* K2Node_Event_SpellTool_4, AActor* K2Node_Event_Instigator_11, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_1, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_10, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_9, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_8, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FGameplayTagContainer K2Node_Event_Impact, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_7, AActor* K2Node_Event_Instigator_6, AActor* K2Node_Event_Instigator_5, FVector K2Node_Event_Location, UIncendioComponent* K2Node_Event_IncendioComponent, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, UPrimitiveComponent* K2Node_Event_primComp_1, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator_4, FVector K2Node_Event_Velocity, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, bool K2Node_Event_bCompletelyBroken, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp, bool Temp_bool_Has_Been_Initd_Variable_1, int32_t CallFunc_Array_Add_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable, TArray<UInteractionArchitectAsset*>& K2Node_MakeArray_Array, bool Temp_bool_IsClosed_Variable_1, FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, FHitResult K2Node_ComponentBoundEvent_Hit, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, AActor* K2Node_Event_Instigator_3, bool K2Node_Event_TransitioningToWingardium, float K2Node_CustomEvent_Delay, bool K2Node_CustomEvent_bExplode, AActor* K2Node_Event_Instigator_2, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator_1, USpellToolRecord* K2Node_Event_SpellToolRecord, FName K2Node_Event_SpellType, FHitResult K2Node_Event_Hit, FVector K2Node_Event_ImpactDirection, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, AActor* K2Node_Event_Instigator, UInteractionArchitectAsset* Temp_object_Variable_1, bool CallFunc_BooleanOR_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, FVector CallFunc_GetComponentBounds_Origin_1, FVector CallFunc_GetComponentBounds_BoxExtent_1, float CallFunc_GetComponentBounds_SphereRadius_1, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, FTransform CallFunc_Conv_VectorToTransform_ReturnValue);
    void ScaleInteraction__DelegateSignature(bool bStart, bool bScaleUp);
    void WingardiumInteraction__DelegateSignature(bool bStart);
    void DescendoInteraction__DelegateSignature();
    void AccioInteraction__DelegateSignature(bool bStarted, float Time);
    void Wake__DelegateSignature();
    void Break__DelegateSignature(float Delay, bool bExplode);
}; // Size: 0x410
#pragma pack(pop)
