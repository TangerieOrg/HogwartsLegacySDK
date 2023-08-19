#include "ABP_AOE_Parry_C.hpp"
#include "AMunitionType_AOE_MultiFX.hpp"
#include "FHitResult.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_AOE_Parry_C* ABP_AOE_Parry_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_AOE_Parry.BP_AOE_Parry_C");
    return (ABP_AOE_Parry_C*)res;
}
void ABP_AOE_Parry_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_AOE_Parry.BP_AOE_Parry_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_AOE_Parry_C::OnHit0(FMunitionImpactData& MunitionImpact, FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_AOE_Parry.BP_AOE_Parry_C.OnHit"));
    struct Params_OnHit {
        FMunitionImpactData MunitionImpact; // 0x0
        FHitResult HitResult; // 0xf0
        bool bHit; // 0x178
        bool bBlocked; // 0x179
        bool bFailed; // 0x17a
    }; // Size: 0x17b
    Params_OnHit params{};
    params.MunitionImpact = (FMunitionImpactData)MunitionImpact;
    params.HitResult = (FHitResult)HitResult;
    params.bHit = (bool)bHit;
    params.bBlocked = (bool)bBlocked;
    params.bFailed = (bool)bFailed;
    ProcessEvent(func, &params);
    MunitionImpact = params.MunitionImpact;
    HitResult = params.HitResult;
}
void ABP_AOE_Parry_C::ExecuteUbergraph_BP_AOE_Parry(int32_t EntryPoint, FMunitionImpactData K2Node_Event_MunitionImpact, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_AOE_Parry.BP_AOE_Parry_C.ExecuteUbergraph_BP_AOE_Parry"));
    struct Params_ExecuteUbergraph_BP_AOE_Parry {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        FMunitionImpactData K2Node_Event_MunitionImpact; // 0x8
        FHitResult K2Node_Event_HitResult; // 0xf8
        bool K2Node_Event_bHit; // 0x180
        bool K2Node_Event_bBlocked; // 0x181
        bool K2Node_Event_bFailed; // 0x182
    }; // Size: 0x183
    Params_ExecuteUbergraph_BP_AOE_Parry params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_MunitionImpact = (FMunitionImpactData)K2Node_Event_MunitionImpact;
    params.K2Node_Event_HitResult = (FHitResult)K2Node_Event_HitResult;
    params.K2Node_Event_bHit = (bool)K2Node_Event_bHit;
    params.K2Node_Event_bBlocked = (bool)K2Node_Event_bBlocked;
    params.K2Node_Event_bFailed = (bool)K2Node_Event_bFailed;
    ProcessEvent(func, &params);
}
