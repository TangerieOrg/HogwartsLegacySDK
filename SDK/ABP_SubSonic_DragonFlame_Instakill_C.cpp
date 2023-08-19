#include "AActor.hpp"
#include "ABP_SubSonic_DragonFlame_Instakill_C.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "USphereComponent.hpp"
void ABP_SubSonic_DragonFlame_Instakill_C::EndTrailFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_DragonFlame_Instakill.BP_SubSonic_DragonFlame_Instakill_C.EndTrailFX"));
    struct Params_EndTrailFX {
    }; // Size: 0x0
    Params_EndTrailFX params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_DragonFlame_Instakill_C::OnFizzle0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_DragonFlame_Instakill.BP_SubSonic_DragonFlame_Instakill_C.OnFizzle"));
    struct Params_OnFizzle {
    }; // Size: 0x0
    Params_OnFizzle params{};
    ProcessEvent(func, &params);
}
ABP_SubSonic_DragonFlame_Instakill_C* ABP_SubSonic_DragonFlame_Instakill_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SubSonic_DragonFlame_Instakill.BP_SubSonic_DragonFlame_Instakill_C");
    return (ABP_SubSonic_DragonFlame_Instakill_C*)res;
}
void ABP_SubSonic_DragonFlame_Instakill_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_DragonFlame_Instakill.BP_SubSonic_DragonFlame_Instakill_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_DragonFlame_Instakill_C::OnFire0(AActor* Target, FVector TargetLocation, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_DragonFlame_Instakill.BP_SubSonic_DragonFlame_Instakill_C.OnFire"));
    struct Params_OnFire {
        AActor* Target; // 0x0
        FVector TargetLocation; // 0x8
        FVector Velocity; // 0x14
    }; // Size: 0x20
    Params_OnFire params{};
    params.Target = (AActor*)Target;
    params.TargetLocation = (FVector)TargetLocation;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
}
void ABP_SubSonic_DragonFlame_Instakill_C::OnHit0(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_DragonFlame_Instakill.BP_SubSonic_DragonFlame_Instakill_C.OnHit"));
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
void ABP_SubSonic_DragonFlame_Instakill_C::ExecuteUbergraph_BP_SubSonic_DragonFlame_Instakill(int32_t EntryPoint, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd) {}
