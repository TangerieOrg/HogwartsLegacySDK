#pragma once
#include <cstdint>
#include "ASpiderWeb_HangingBase.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMeshList.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class UPoseableMeshComponent;
class UPhysicsConstraintComponent;
class UStaticMeshComponent;
class USceneComponent;
class AActor;
class ABP_EggSackA_C;
class UPrimitiveComponent;
class URepairComponent;
class UGeometryCollectionComponent;
class ASpellTool;
class UInteractionArchitectAsset;
class USpellToolRecord;
#pragma pack(push, 1)
class ABP_HangingSpiderSack_C : public ASpiderWeb_HangingBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x348
    UChildActorComponent* EggSack; // 0x350
    UPhysicsConstraintComponent* PhysicsConstraint; // 0x358
    UPoseableMeshComponent* PoseableMesh; // 0x360
    UStaticMeshComponent* Anchor; // 0x368
    USceneComponent* Root; // 0x370
    int32_t PropIndex; // 0x378
    char pad_37c[0x54];
    bool CompiledList; // 0x3d0
    char pad_3d1[0x7];
    ABP_EggSackA_C* SpawnedSackBP; // 0x3d8
    char pad_3e0[0x10];
    UPhysicsConstraintComponent* Physics_Constraint; // 0x3f0
    FRandomStream Random_Seed; // 0x3f8
    static ABP_HangingSpiderSack_C* StaticClass();
    bool Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    bool Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    bool NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    void UserConstructionScript(FMeshList Meshes, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, ABP_EggSackA_C* K2Node_DynamicCast_AsBP_Egg_Sack_A, bool K2Node_DynamicCast_bSuccess, FRandomStream CallFunc_MakeRandomStream_RandomStream, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, int32_t CallFunc_SelectMesh_NewPropIndex);
    void OnAttemptToRepair();
    void OnBeginRepairing();
    void OnCriticalHealthReached();
    void OnDoneRepairing();
    void OnFailedToBeDestroyed();
    void OnFailedToBeHealed();
    void OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection);
    void OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection);
    void OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken);
    void OnHealed(float healAmount, UPrimitiveComponent* PrimComp);
    void OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection);
    void OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact);
    void OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation);
    void OnSpellEffective(AActor* Instigator);
    void OnSpellIneffective(AActor* Instigator);
    void OnSpellTooWeak(AActor* Instigator);
    void ReceiveBeginPlay();
    void OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void OnAttemptToHeal();
    void OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    void BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_1_Break__DelegateSignature(float Delay, bool bExplode);
    void BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_2_AccioInteraction__DelegateSignature(bool bStarted, float Time);
    void BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_3_DescendoInteraction__DelegateSignature();
    void BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_4_WingardiumInteraction__DelegateSignature(bool bStart);
    void BndEvt__SpawnedSackBP_K2Node_ComponentBoundEvent_5_ScaleInteraction__DelegateSignature(bool bStart, bool bScaleUp);
    void BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_6_ComponentWakeSignature__DelegateSignature(UPrimitiveComponent* WakingComponent, FName BoneName);
    void BndEvt__SackMeshComp_K2Node_ComponentBoundEvent_7_ComponentSleepSignature__DelegateSignature(UPrimitiveComponent* SleepingComponent, FName BoneName);
    void ExecuteUbergraph_BP_HangingSpiderSack(int32_t EntryPoint, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, bool K2Node_Event_bCompletelyBroken, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp_1, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_7, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_6, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_5, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FGameplayTagContainer K2Node_Event_Impact, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_4, AActor* K2Node_Event_Instigator_3, AActor* K2Node_Event_Instigator_2, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator_1, USpellToolRecord* K2Node_Event_SpellToolRecord, FName K2Node_Event_SpellType, FHitResult K2Node_Event_Hit, FVector K2Node_Event_ImpactDirection, bool K2Node_SwitchName_CmpSuccess, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, UPrimitiveComponent* K2Node_Event_primComp, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator, FVector K2Node_Event_Velocity, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_ComponentBoundEvent_Delay, bool K2Node_ComponentBoundEvent_bExplode, bool K2Node_ComponentBoundEvent_bStarted, float K2Node_ComponentBoundEvent_Time, bool K2Node_ComponentBoundEvent_bStart_1, bool K2Node_ComponentBoundEvent_bStart, bool K2Node_ComponentBoundEvent_bScaleUp, UPrimitiveComponent* K2Node_ComponentBoundEvent_WakingComponent, FName K2Node_ComponentBoundEvent_BoneName_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_SleepingComponent, FName K2Node_ComponentBoundEvent_BoneName);
    void Break__DelegateSignature();
}; // Size: 0x400
#pragma pack(pop)
