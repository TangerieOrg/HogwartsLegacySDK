#pragma once
#include <cstdint>
#include "AStaticMeshActor.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UObjectStateComponent;
class AActor;
class UPrimitiveComponent;
class UObjectStateInfo;
class USkinFXComponent;
class URepairComponent;
class UGeometryCollectionComponent;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_H_Part_C : public AStaticMeshActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x258
    UObjectStateComponent* ObjectState; // 0x260
    char pad_268[0x20];
    static ABP_Sphinx_Puzzle_H_Part_C* StaticClass();
    bool NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    bool Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    bool Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    void OnAttemptToHeal();
    void OnAttemptToRepair();
    void OnCriticalHealthReached();
    void OnDoneRepairing();
    void OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    void OnFailedToBeDestroyed();
    void OnFailedToBeHealed();
    void OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection);
    void OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection);
    void OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken);
    void OnHealed(float healAmount, UPrimitiveComponent* PrimComp);
    void Success();
    void OnBeginRepairing();
    void Reveal();
    void ReceiveBeginPlay();
    void LoadSolution();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_H_Part(int32_t EntryPoint, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, bool K2Node_Event_bCompletelyBroken, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, UPrimitiveComponent* K2Node_Event_primComp_1, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator, FVector K2Node_Event_Velocity, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_2, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_3, FName CallFunc_SkinFXName_name, FName CallFunc_SkinFXName_name_1, USkinFXComponent* CallFunc_ActorStartSkinFX_skinFXComponent);
    void Broken__DelegateSignature();
    void Repaired__DelegateSignature();
}; // Size: 0x288
#pragma pack(pop)
