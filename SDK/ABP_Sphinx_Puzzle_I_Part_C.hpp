#pragma once
#include <cstdint>
#include "APhoenixBudgetedActor.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USceneComponent;
class USkeletalMeshComponent;
class UGeometryCollection;
class UStaticMeshComponent;
class AActor;
class UObjectStateComponent;
class UObjectStateInfo;
class UPrimitiveComponent;
class UAkComponent;
class URepairComponent;
class UGeometryCollectionComponent;
class USkinFXComponent;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_I_Part_C : public APhoenixBudgetedActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    USkeletalMeshComponent* Vine; // 0x270
    UStaticMeshComponent* StaticMesh; // 0x278
    USceneComponent* Root; // 0x280
    UObjectStateComponent* ObjectState; // 0x288
    char pad_290[0x20];
    TArray<void*> Meshes; // 0x2b0
    TArray<void*> BaseMeshes; // 0x2c0
    TArray<UGeometryCollection*> DestructibleGeometryCollections; // 0x2d0
    int32_t MeshNum; // 0x2e0
    char pad_2e4[0x4];
    static ABP_Sphinx_Puzzle_I_Part_C* StaticClass();
    bool NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    bool Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    bool Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue_1);
    void Build(bool CallFunc_IsValid_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, int32_t CallFunc_Clamp_ReturnValue);
    void UserConstructionScript();
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
    void VineStart();
    void Reveal();
    void ReceiveBeginPlay();
    void LoadSolution();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_I_Part(int32_t EntryPoint, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, bool K2Node_Event_bCompletelyBroken, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, UPrimitiveComponent* K2Node_Event_primComp_1, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator, FVector K2Node_Event_Velocity, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_2, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_3, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_2, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue_2, FName CallFunc_SkinFXName_name, FName CallFunc_SkinFXName_name_1, USkinFXComponent* CallFunc_ActorStartSkinFX_skinFXComponent);
    void Broken__DelegateSignature();
    void Repaired__DelegateSignature();
}; // Size: 0x2e8
#pragma pack(pop)
