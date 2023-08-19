#pragma once
#include <cstdint>
#include "AMunitionType_AOE_MultiFX.hpp"
#include "FHitResult.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class USceneComponent;
class UPrimitiveComponent;
class UPhysicalMaterial;
class AActor;
#pragma pack(push, 1)
class ABP_AOE_FieryExplosion_Character_C : public AMunitionType_AOE_MultiFX {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x660
    USceneComponent* DefaultSceneRoot; // 0x668
    static ABP_AOE_FieryExplosion_Character_C* StaticClass();
    void OnHit0(FMunitionImpactData& MunitionImpact, FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed);
    void ExecuteUbergraph_BP_AOE_FieryExplosion_Character(int32_t EntryPoint, FMunitionImpactData K2Node_Event_MunitionImpact, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_SetOnFire_ReturnValue);
}; // Size: 0x670
#pragma pack(pop)
