#pragma once
#include <cstdint>
#include "ABP_Breakable_Persistent_C.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UPrimitiveComponent;
class AActor;
class URepairComponent;
class UGeometryCollectionComponent;
#pragma pack(push, 1)
class ABP_HM_Neep_Wood_Fence_G_C : public ABP_Breakable_Persistent_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x358
    static ABP_HM_Neep_Wood_Fence_G_C* StaticClass();
    bool Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    bool Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    bool NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
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
    void ExecuteUbergraph_BP_HM_Neep_Wood_Fence_G(int32_t EntryPoint, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, UPrimitiveComponent* K2Node_Event_primComp_1, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator, FVector K2Node_Event_Velocity, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, bool K2Node_Event_bCompletelyBroken);
}; // Size: 0x360
#pragma pack(pop)
