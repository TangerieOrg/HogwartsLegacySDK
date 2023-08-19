#include "AActor.hpp"
#include "ABP_SubSonic_Sorcerer_Flame_C.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UNiagaraComponent.hpp"
#include "UPointLightComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_SubSonic_Sorcerer_Flame_C::OnHit0(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Sorcerer_Flame.BP_SubSonic_Sorcerer_Flame_C.OnHit"));
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
ABP_SubSonic_Sorcerer_Flame_C* ABP_SubSonic_Sorcerer_Flame_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SubSonic_Sorcerer_Flame.BP_SubSonic_Sorcerer_Flame_C");
    return (ABP_SubSonic_Sorcerer_Flame_C*)res;
}
void ABP_SubSonic_Sorcerer_Flame_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Sorcerer_Flame.BP_SubSonic_Sorcerer_Flame_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_Sorcerer_Flame_C::OnFire0(AActor* Target, FVector TargetLocation, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Sorcerer_Flame.BP_SubSonic_Sorcerer_Flame_C.OnFire"));
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
void ABP_SubSonic_Sorcerer_Flame_C::EndTrailFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Sorcerer_Flame.BP_SubSonic_Sorcerer_Flame_C.EndTrailFX"));
    struct Params_EndTrailFX {
    }; // Size: 0x0
    Params_EndTrailFX params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_Sorcerer_Flame_C::OnFizzle0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Sorcerer_Flame.BP_SubSonic_Sorcerer_Flame_C.OnFizzle"));
    struct Params_OnFizzle {
    }; // Size: 0x0
    Params_OnFizzle params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_Sorcerer_Flame_C::ExecuteUbergraph_BP_SubSonic_Sorcerer_Flame(int32_t EntryPoint, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, AActor* K2Node_Event_Target, FVector K2Node_Event_TargetLocation, FVector K2Node_Event_Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Sorcerer_Flame.BP_SubSonic_Sorcerer_Flame_C.ExecuteUbergraph_BP_SubSonic_Sorcerer_Flame"));
    struct Params_ExecuteUbergraph_BP_SubSonic_Sorcerer_Flame {
        int32_t EntryPoint; // 0x0
        FHitResult K2Node_Event_HitResult; // 0x4
        bool K2Node_Event_bDestroyed; // 0x8c
        bool K2Node_Event_bHit; // 0x8d
        bool K2Node_Event_bBlocked; // 0x8e
        bool K2Node_Event_bFailed; // 0x8f
        AActor* K2Node_Event_Target; // 0x90
        FVector K2Node_Event_TargetLocation; // 0x98
        FVector K2Node_Event_Velocity; // 0xa4
    }; // Size: 0xb0
    Params_ExecuteUbergraph_BP_SubSonic_Sorcerer_Flame params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_HitResult = (FHitResult)K2Node_Event_HitResult;
    params.K2Node_Event_bDestroyed = (bool)K2Node_Event_bDestroyed;
    params.K2Node_Event_bHit = (bool)K2Node_Event_bHit;
    params.K2Node_Event_bBlocked = (bool)K2Node_Event_bBlocked;
    params.K2Node_Event_bFailed = (bool)K2Node_Event_bFailed;
    params.K2Node_Event_Target = (AActor*)K2Node_Event_Target;
    params.K2Node_Event_TargetLocation = (FVector)K2Node_Event_TargetLocation;
    params.K2Node_Event_Velocity = (FVector)K2Node_Event_Velocity;
    ProcessEvent(func, &params);
}
