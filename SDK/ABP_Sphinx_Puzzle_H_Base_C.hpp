#pragma once
#include <cstdint>
#include "APhoenixBudgetedStaticMeshActor.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class USkeletalMeshComponent;
class UObjectStateComponent;
class AActor;
class ABP_Sphinx_Puzzle_H_Part_C;
class URepairComponent;
class UGeometryCollectionComponent;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_H_Base_C : public APhoenixBudgetedStaticMeshActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    USkeletalMeshComponent* Vine; // 0x270
    UObjectStateComponent* ObjectState; // 0x278
    ABP_Sphinx_Puzzle_H_Part_C* Stone; // 0x280
    static ABP_Sphinx_Puzzle_H_Base_C* StaticClass();
    bool NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    bool Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    bool Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    void OnAttemptToHeal();
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
    void Success();
    void OnAttemptToRepair();
    void ReceiveBeginPlay();
    void Broken();
    void Repaired();
    void Reveal();
    void LoadSolution();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_H_Base(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
