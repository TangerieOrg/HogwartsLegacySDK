#include "AActor.hpp"
#include "ABP_BroomFlightVFXActor_C.hpp"
#include "ABP_FlyingBroomCapsule_C.hpp"
#include "ABroomFlightVFXActor.hpp"
#include "AFlyingBroom.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHitResult.hpp"
#include "FLinearColor.hpp"
#include "FMultiFX2Handle.hpp"
#include "FNiagaraSystemSpawnAttachedPointInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_AccentVFX.hpp"
#include "FVector.hpp"
#include "UFlyingBroomPhysics_FreeRoam.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UPostProcessComponent.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UWindPointSourceWithEnvelopeComponent.hpp"
UPostProcessComponent* ABP_BroomFlightVFXActor_C::GetPostProcess0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.GetPostProcess"));
    struct Params_GetPostProcess {
        UPostProcessComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPostProcess params{};
    ProcessEvent(func, &params);
    return (UPostProcessComponent*)params.ReturnValue;
}
ABP_BroomFlightVFXActor_C* ABP_BroomFlightVFXActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C");
    return (ABP_BroomFlightVFXActor_C*)res;
}
void ABP_BroomFlightVFXActor_C::CreateBroomMaterialDynamic0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.CreateBroomMaterialDynamic"));
    struct Params_CreateBroomMaterialDynamic {
    }; // Size: 0x0
    Params_CreateBroomMaterialDynamic params{};
    ProcessEvent(func, &params);
}
UNiagaraComponent* ABP_BroomFlightVFXActor_C::GetNiagara0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.GetNiagara"));
    struct Params_GetNiagara {
        UNiagaraComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetNiagara params{};
    ProcessEvent(func, &params);
    return (UNiagaraComponent*)params.ReturnValue;
}
void ABP_BroomFlightVFXActor_C::SetupCollisionVFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SetupCollisionVFX"));
    struct Params_SetupCollisionVFX {
    }; // Size: 0x0
    Params_SetupCollisionVFX params{};
    ProcessEvent(func, &params);
}
void ABP_BroomFlightVFXActor_C::StartBoostGainVFX(FNiagaraSystemSpawnAttachedPointInfo K2Node_MakeStruct_NiagaraSystemSpawnAttachedPointInfo, UNiagaraComponent* CallFunc_SpawnAttached_NiagaraComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.StartBoostGainVFX"));
    struct Params_StartBoostGainVFX {
        FNiagaraSystemSpawnAttachedPointInfo K2Node_MakeStruct_NiagaraSystemSpawnAttachedPointInfo; // 0x0
        UNiagaraComponent* CallFunc_SpawnAttached_NiagaraComponent; // 0x80
    }; // Size: 0x88
    Params_StartBoostGainVFX params{};
    params.K2Node_MakeStruct_NiagaraSystemSpawnAttachedPointInfo = (FNiagaraSystemSpawnAttachedPointInfo)K2Node_MakeStruct_NiagaraSystemSpawnAttachedPointInfo;
    params.CallFunc_SpawnAttached_NiagaraComponent = (UNiagaraComponent*)CallFunc_SpawnAttached_NiagaraComponent;
    ProcessEvent(func, &params);
}
UNiagaraComponent* ABP_BroomFlightVFXActor_C::SpawnNiagaraSystem0(UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SpawnNiagaraSystem"));
    struct Params_SpawnNiagaraSystem {
        UNiagaraComponent* ReturnValue; // 0x0
        UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SpawnNiagaraSystem params{};
    params.CallFunc_SpawnSystemAttached_ReturnValue = (UNiagaraComponent*)CallFunc_SpawnSystemAttached_ReturnValue;
    ProcessEvent(func, &params);
    return (UNiagaraComponent*)params.ReturnValue;
}
AFlyingBroom* ABP_BroomFlightVFXActor_C::GetBroomCapsule0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.GetBroomCapsule"));
    struct Params_GetBroomCapsule {
        AFlyingBroom* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBroomCapsule params{};
    ProcessEvent(func, &params);
    return (AFlyingBroom*)params.ReturnValue;
}
void ABP_BroomFlightVFXActor_C::EndBoostGainVFX(bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.EndBoostGainVFX"));
    struct Params_EndBoostGainVFX {
        bool CallFunc_IsValid_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EndBoostGainVFX params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_BroomFlightVFXActor_C::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.OnHit"));
    struct Params_OnHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpulse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_OnHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void ABP_BroomFlightVFXActor_C::SetupVFXRefs0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SetupVFXRefs"));
    struct Params_SetupVFXRefs {
    }; // Size: 0x0
    Params_SetupVFXRefs params{};
    ProcessEvent(func, &params);
}
void ABP_BroomFlightVFXActor_C::SetupBroomTrailVFX0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SetupBroomTrailVFX"));
    struct Params_SetupBroomTrailVFX {
    }; // Size: 0x0
    Params_SetupBroomTrailVFX params{};
    ProcessEvent(func, &params);
}
void ABP_BroomFlightVFXActor_C::DestroyNiagaraAndPostProcessComponent0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.DestroyNiagaraAndPostProcessComponent"));
    struct Params_DestroyNiagaraAndPostProcessComponent {
    }; // Size: 0x0
    Params_DestroyNiagaraAndPostProcessComponent params{};
    ProcessEvent(func, &params);
}
void ABP_BroomFlightVFXActor_C::SetupGroundVFX0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SetupGroundVFX"));
    struct Params_SetupGroundVFX {
    }; // Size: 0x0
    Params_SetupGroundVFX params{};
    ProcessEvent(func, &params);
}
void ABP_BroomFlightVFXActor_C::SetRadialBlurParameterValues0(float EffectAmount, FLinearColor TargetPos) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SetRadialBlurParameterValues"));
    struct Params_SetRadialBlurParameterValues {
        float EffectAmount; // 0x0
        FLinearColor TargetPos; // 0x4
    }; // Size: 0x14
    Params_SetRadialBlurParameterValues params{};
    params.EffectAmount = (float)EffectAmount;
    params.TargetPos = (FLinearColor)TargetPos;
    ProcessEvent(func, &params);
}
void ABP_BroomFlightVFXActor_C::SetRadialBlurToggleParameterValue0(float ToggleAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.SetRadialBlurToggleParameterValue"));
    struct Params_SetRadialBlurToggleParameterValue {
        float ToggleAmount; // 0x0
    }; // Size: 0x4
    Params_SetRadialBlurToggleParameterValue params{};
    params.ToggleAmount = (float)ToggleAmount;
    ProcessEvent(func, &params);
}
void ABP_BroomFlightVFXActor_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/BP_BroomFlightVFXActor.BP_BroomFlightVFXActor_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_BroomFlightVFXActor_C::ExecuteUbergraph_BP_BroomFlightVFXActor(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
