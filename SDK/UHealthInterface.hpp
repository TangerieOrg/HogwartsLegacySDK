#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
#include "UInterface.hpp"
class UPrimitiveComponent;
class URepairComponent;
class UGeometryCollectionComponent;
class AActor;
#pragma pack(push, 1)
class UHealthInterface : public UInterface {
public:
    static UHealthInterface* StaticClass();
    void OnHealed(float healAmount, UPrimitiveComponent* PrimComp);
    void OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken);
    void OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection);
    void OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection);
    void OnFailedToBeHealed();
    void OnFailedToBeDestroyed();
    void OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    void OnDoneRepairing();
    void OnCriticalHealthReached();
    void OnBeginRepairing();
    void OnAttemptToRepair();
    void OnAttemptToHeal();
    bool NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    bool Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    bool Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
}; // Size: 0x28
#pragma pack(pop)
