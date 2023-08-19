#include "AActor.hpp"
#include "ABP_SubSonic_Levioso_C.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_SubSonic_Levioso_C::ExecuteUbergraph_BP_SubSonic_Levioso(int32_t EntryPoint, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_GetWorldDeltaSeconds_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd) {}
ABP_SubSonic_Levioso_C* ABP_SubSonic_Levioso_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SubSonic_Levioso.BP_SubSonic_Levioso_C");
    return (ABP_SubSonic_Levioso_C*)res;
}
void ABP_SubSonic_Levioso_C::Update_Velocity() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Levioso.BP_SubSonic_Levioso_C.Update Velocity"));
    struct Params_Update_Velocity {
    }; // Size: 0x0
    Params_Update_Velocity params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_Levioso_C::MoveSphere() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Levioso.BP_SubSonic_Levioso_C.MoveSphere"));
    struct Params_MoveSphere {
    }; // Size: 0x0
    Params_MoveSphere params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_Levioso_C::Loop() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Levioso.BP_SubSonic_Levioso_C.Loop"));
    struct Params_Loop {
    }; // Size: 0x0
    Params_Loop params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_Levioso_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Levioso.BP_SubSonic_Levioso_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_SubSonic_Levioso_C::OnHit0(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Levioso.BP_SubSonic_Levioso_C.OnHit"));
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
void ABP_SubSonic_Levioso_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Levioso.BP_SubSonic_Levioso_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
