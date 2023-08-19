#pragma once
#include <cstdint>
#include "AMunitionType_PhoenixSubsonic.hpp"
#include "FDamageInfo.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class AOppugnoSpellTool;
class AActor;
class UObjectStateComponent;
class UStaticMeshComponent;
class UInteractionArchitectAsset;
class ASpellTool;
class UPhysicalMaterial;
class UClass;
class UPrimitiveComponent;
class APawn;
class AExplosiveBarrel;
class UVelocityTrackerComponent;
class AEnemyAIWeapon;
#pragma pack(push, 1)
class ABP_SubSonic_PlayerOppugnoPhysReplacement_C : public AMunitionType_PhoenixSubsonic {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x488
    UObjectStateComponent* ObjectState; // 0x490
    UStaticMeshComponent* StaticMesh; // 0x498
    FVector LastVelocity; // 0x4a0
    float VelocityScale; // 0x4ac
    TArray<UInteractionArchitectAsset*> In_Munition_Data_Assets; // 0x4b0
    static ABP_SubSonic_PlayerOppugnoPhysReplacement_C* StaticClass();
    void OnFire(AActor* Target, FVector TargetLocation, FVector Velocity);
    void OnHit(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SubSonic_PlayerOppugnoPhysReplacement(int32_t EntryPoint, ASpellTool* CallFunc_GetSpellTool_ReturnValue, AOppugnoSpellTool* K2Node_DynamicCast_AsOppugno_Spell_Tool, bool K2Node_DynamicCast_bSuccess, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, AActor* K2Node_Event_Target, FVector K2Node_Event_TargetLocation, FVector K2Node_Event_Velocity, FVector CallFunc_Multiply_VectorFloat_ReturnValue, APawn* CallFunc_GetInstigator_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UClass* K2Node_ClassDynamicCast_AsMunition_Type_Subsonic_Spell, bool K2Node_ClassDynamicCast_bSuccess, AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, FDamageInfo CallFunc_DoDamageTarget_OutDamageInfo, bool CallFunc_DoDamageTarget_ReturnValue, AExplosiveBarrel* K2Node_DynamicCast_AsExplosive_Barrel, bool K2Node_DynamicCast_bSuccess_1, UVelocityTrackerComponent* CallFunc_AddVelocityTracker_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, AEnemyAIWeapon* K2Node_DynamicCast_AsEnemy_AIWeapon, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0x4c0
#pragma pack(pop)
