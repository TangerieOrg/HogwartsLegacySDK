#pragma once
#include <cstdint>
#include "AMunitionType_AOE_MultiFX.hpp"
#include "FHitResult.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_AOE_Parry_C : public AMunitionType_AOE_MultiFX {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x660
    USceneComponent* DefaultSceneRoot; // 0x668
    static ABP_AOE_Parry_C* StaticClass();
    void ReceiveBeginPlay();
    void OnHit0(FMunitionImpactData& MunitionImpact, FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed);
    void ExecuteUbergraph_BP_AOE_Parry(int32_t EntryPoint, FMunitionImpactData K2Node_Event_MunitionImpact, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed);
}; // Size: 0x670
#pragma pack(pop)
