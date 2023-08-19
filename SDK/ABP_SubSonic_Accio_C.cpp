#include "ABP_SubSonic_Accio_C.hpp"
#include "AMunitionType_AccioSubsonicSpell.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
ABP_SubSonic_Accio_C* ABP_SubSonic_Accio_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SubSonic_Accio.BP_SubSonic_Accio_C");
    return (ABP_SubSonic_Accio_C*)res;
}
void ABP_SubSonic_Accio_C::OnHit(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Accio.BP_SubSonic_Accio_C.OnHit"));
    struct Params_OnHit {
        FHitResult HitResult; // 0x0
        bool bDestroyed; // 0x88
        bool bHit; // 0x89
        bool bBlocked; // 0x8a
        bool bFailed; // 0x8b
    }; // Size: 0x8c
    Params_OnHit params{};
    params.HitResult = (FHitResult)HitResult;
    params.bDestroyed = (bool)bDestroyed;
    params.bHit = (bool)bHit;
    params.bBlocked = (bool)bBlocked;
    params.bFailed = (bool)bFailed;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
}
void ABP_SubSonic_Accio_C::ExecuteUbergraph_BP_SubSonic_Accio(int32_t EntryPoint, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Accio.BP_SubSonic_Accio_C.ExecuteUbergraph_BP_SubSonic_Accio"));
    struct Params_ExecuteUbergraph_BP_SubSonic_Accio {
        int32_t EntryPoint; // 0x0
        FHitResult K2Node_Event_HitResult; // 0x4
        bool K2Node_Event_bDestroyed; // 0x8c
        bool K2Node_Event_bHit; // 0x8d
        bool K2Node_Event_bBlocked; // 0x8e
        bool K2Node_Event_bFailed; // 0x8f
    }; // Size: 0x90
    Params_ExecuteUbergraph_BP_SubSonic_Accio params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_HitResult = (FHitResult)K2Node_Event_HitResult;
    params.K2Node_Event_bDestroyed = (bool)K2Node_Event_bDestroyed;
    params.K2Node_Event_bHit = (bool)K2Node_Event_bHit;
    params.K2Node_Event_bBlocked = (bool)K2Node_Event_bBlocked;
    params.K2Node_Event_bFailed = (bool)K2Node_Event_bFailed;
    ProcessEvent(func, &params);
}
