#include "AActor.hpp"
#include "ABP_SubSonic_ConfringoProjectile_C.hpp"
#include "ACharacter.hpp"
#include "AMunitionType_Subsonic.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UNiagaraComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
ABP_SubSonic_ConfringoProjectile_C* ABP_SubSonic_ConfringoProjectile_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SubSonic_ConfringoProjectile.BP_SubSonic_ConfringoProjectile_C");
    return (ABP_SubSonic_ConfringoProjectile_C*)res;
}
void ABP_SubSonic_ConfringoProjectile_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_ConfringoProjectile.BP_SubSonic_ConfringoProjectile_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_ConfringoProjectile_C::OnHit(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_ConfringoProjectile.BP_SubSonic_ConfringoProjectile_C.OnHit"));
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
void ABP_SubSonic_ConfringoProjectile_C::CustomEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_ConfringoProjectile.BP_SubSonic_ConfringoProjectile_C.CustomEvent"));
    struct Params_CustomEvent {
    }; // Size: 0x0
    Params_CustomEvent params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_ConfringoProjectile_C::ExecuteUbergraph_BP_SubSonic_ConfringoProjectile(int32_t EntryPoint, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Subtract_VectorVector_ReturnValue, UGeometryCollectionComponent* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetOnFire_ReturnValue) {}
void ABP_SubSonic_ConfringoProjectile_C::CustomEvent_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_ConfringoProjectile.BP_SubSonic_ConfringoProjectile_C.CustomEvent_2"));
    struct Params_CustomEvent_2 {
    }; // Size: 0x0
    Params_CustomEvent_2 params{};
    ProcessEvent(func, &params);
}
