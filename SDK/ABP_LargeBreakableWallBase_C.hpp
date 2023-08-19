#pragma once
#include <cstdint>
#include "ABP_Breakable_Persistent_C.hpp"
#include "FDamageInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UAkComponent;
class UCognitionStimuliSourceComponent;
class UPrimitiveComponent;
class AActor;
class UGeometryCollectionComponent;
class URepairComponent;
class ASpellTool;
class UInteractionArchitectAsset;
class USpellToolRecord;
class UPhysicalMaterial;
#pragma pack(push, 1)
class ABP_LargeBreakableWallBase_C : public ABP_Breakable_Persistent_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x358
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x360
    float Damage; // 0x368
    float ExplosionForce; // 0x36c
    bool PlayMusicStinger; // 0x370
    char pad_371[0x7];
    static ABP_LargeBreakableWallBase_C* StaticClass();
    FName GetMainBone();
    UPrimitiveComponent* GetMainPrimitive();
    bool Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    bool Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    bool NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    void OnReset();
    void SetupSfx(UAkComponent* AkComponent);
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
    void OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection);
    void OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact);
    void OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation);
    void OnSpellEffective(AActor* Instigator);
    void OnSpellIneffective(AActor* Instigator);
    void OnSpellTooWeak(AActor* Instigator);
    void OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void ReceiveBeginPlay0();
    void MusicStinger();
    void ExecuteUbergraph_BP_LargeBreakableWallBase(int32_t EntryPoint, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, UPrimitiveComponent* K2Node_Event_primComp_1, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator_7, FVector K2Node_Event_Velocity, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, bool K2Node_Event_bCompletelyBroken, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_6, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_5, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_4, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FGameplayTagContainer K2Node_Event_Impact, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_3, AActor* K2Node_Event_Instigator_2, AActor* K2Node_Event_Instigator_1, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator, USpellToolRecord* K2Node_Event_SpellToolRecord, FName K2Node_Event_SpellType, FHitResult K2Node_Event_Hit, FVector K2Node_Event_ImpactDirection, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool K2Node_SwitchName_CmpSuccess, UAkComponent* K2Node_Event_AkComponent, FDamageInfo CallFunc_DoDamageLocationDirection_OutDamageInfo, bool CallFunc_DoDamageLocationDirection_ReturnValue, int32_t CallFunc_AddStateToStack_ReturnValue, int32_t CallFunc_AddStateToStack_ReturnValue_1);
}; // Size: 0x378
#pragma pack(pop)
