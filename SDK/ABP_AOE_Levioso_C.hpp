#pragma once
#include <cstdint>
#include "AMunitionType_AOE_MultiFX.hpp"
#include "FHitResult.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class USceneComponent;
class ASpellTool;
class UPrimitiveComponent;
class AActor;
class ULeviosoComponent;
class UPhysicalMaterial;
class UActorComponent;
#pragma pack(push, 1)
class ABP_AOE_Levioso_C : public AMunitionType_AOE_MultiFX {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x660
    USceneComponent* DefaultSceneRoot; // 0x668
    float Duration; // 0x670
    char pad_674[0x4];
    static ABP_AOE_Levioso_C* StaticClass();
    void ReceiveBeginPlay();
    void OnHit0(FMunitionImpactData& MunitionImpact, FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed);
    void ExecuteUbergraph_BP_AOE_Levioso(int32_t EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, ASpellTool* K2Node_DynamicCast_AsSpell_Tool, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetCharacterActor_ReturnValue, FMunitionImpactData K2Node_Event_MunitionImpact, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UActorComponent* CallFunc_CreateImpactComponent_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, ULeviosoComponent* K2Node_DynamicCast_AsLevioso_Component, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetRemainingTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue);
}; // Size: 0x678
#pragma pack(pop)
