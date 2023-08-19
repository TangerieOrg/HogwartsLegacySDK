#pragma once
#include <cstdint>
#include "ABP_Breakable_Persistent_C.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UOdcAuthoredObstacleSetupComponent;
class URepairComponent;
class UGeometryCollectionComponent;
class ASpellTool;
class AActor;
class UInteractionArchitectAsset;
class ACharacter;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_BreakableRockPileB_C : public ABP_Breakable_Persistent_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x358
    UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x360
    static ABP_BreakableRockPileB_C* StaticClass();
    bool DescendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity);
    bool DisallowDescendo();
    bool AccioStart(ASpellTool* SpellTool, AActor* Instigator, FVector Velocity, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection);
    bool DepulsoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, FHitResult NewLocalVar_0, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TArray<UInteractionArchitectAsset*>& K2Node_MakeArray_Array, bool CallFunc_DoDamage_ReturnValue);
    bool DisallowAccio();
    bool DisallowDepulso();
    bool DisallowFlipendo();
    bool DisallowLevioso();
    bool DisallowWingardium();
    bool ExpulsoStart(AActor* Instigator, FVector Location);
    bool FlipendoStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location);
    bool LeviosoChargedStart(ASpellTool* SpellTool, AActor* Instigator, FVector Location, FVector Velocity, bool InitiatedByPlayer, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, FVector& ImpactDirection);
    bool LeviosoStart(AActor* Instigator, FVector Location, FGameplayTagContainer Impact, TArray<UInteractionArchitectAsset*>& DataAssets, bool InitiatedByPlayer, bool& OverrideEffects);
    bool WingardiumStart(ASpellTool* SpellTool, AActor* Instigator);
    bool NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    bool Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    bool Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
    void OnAccioEnd(AActor* Instigator, bool TransitioningToWingardium);
    void OnAccioFailed();
    void OnAccioThrow(ASpellTool* SpellTool, AActor* Instigator, FVector ThrowVelocity, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnDepulsoFailed();
    void OnDepulsoThrow(ASpellTool* SpellTool, FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnExpulsoThrow(FVector ThrowVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnFlipendoFailed();
    void OnFlipendoThrow(ASpellTool* SpellTool, FVector ThrowDirection, FVector ThrowVelocity, FVector AngularVelocity, FVector Target, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, FGameplayTagContainer Impact);
    void OnLeviosoEnd(AActor* Instigator, bool InitiatedByPlayer);
    void OnLeviosoFailed(bool InitiatedByPlayer);
    void OnWingardiumEnd(AActor* Instigator);
    void OnWingardiumFailed();
    void OnWingardiumGhostStart(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets);
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
    void ExecuteUbergraph_BP_BreakableRockPileB(int32_t EntryPoint, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp, AActor* K2Node_Event_Instigator_8, bool K2Node_Event_TransitioningToWingardium, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_7, FVector K2Node_Event_ThrowVelocity_3, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_4, FGameplayTagContainer K2Node_Event_Impact_3, ASpellTool* K2Node_Event_SpellTool_2, FVector K2Node_Event_ThrowVelocity_2, FVector K2Node_Event_Target_2, AActor* K2Node_Event_Instigator_6, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_3, FGameplayTagContainer K2Node_Event_Impact_2, FVector K2Node_Event_ThrowVelocity_1, FVector K2Node_Event_Target_1, AActor* K2Node_Event_Instigator_5, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, FVector K2Node_Event_ThrowDirection, FVector K2Node_Event_ThrowVelocity, FVector K2Node_Event_AngularVelocity, FVector K2Node_Event_Target, AActor* K2Node_Event_Instigator_4, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets_1, FGameplayTagContainer K2Node_Event_Impact, AActor* K2Node_Event_Instigator_3, bool K2Node_Event_InitiatedByPlayer_1, bool K2Node_Event_InitiatedByPlayer, AActor* K2Node_Event_Instigator_2, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator_1, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, UPrimitiveComponent* K2Node_Event_primComp_1, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator, FVector K2Node_Event_Velocity, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, bool K2Node_Event_bCompletelyBroken);
}; // Size: 0x368
#pragma pack(pop)
