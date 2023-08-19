#include "AMunitionType_AOESpell.hpp"
#include "AMunitionType_Base.hpp"
#include "ASpellTool.hpp"
#include "FHitResult.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UParticleSystem.hpp"
AMunitionType_AOESpell* AMunitionType_AOESpell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MunitionType_AOESpell");
    return (AMunitionType_AOESpell*)res;
}
void AMunitionType_AOESpell::OnHit(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOESpell.OnHit"));
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
ASpellTool* AMunitionType_AOESpell::GetSpellTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOESpell.GetSpellTool"));
    struct Params_GetSpellTool {
        ASpellTool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpellTool params{};
    ProcessEvent(func, &params);
    return (ASpellTool*)params.ReturnValue;
}
