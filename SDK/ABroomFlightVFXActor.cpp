#include "AActor.hpp"
#include "ABroomFlightVFXActor.hpp"
#include "AFlyingBroom.hpp"
#include "ETraceTypeQuery.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UNiagaraComponent.hpp"
#include "UPostProcessComponent.hpp"
ABroomFlightVFXActor* ABroomFlightVFXActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomFlightVFXActor");
    return (ABroomFlightVFXActor*)res;
}
void ABroomFlightVFXActor::DestroyNiagaraAndPostProcessComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomFlightVFXActor.DestroyNiagaraAndPostProcessComponent"));
    struct Params_DestroyNiagaraAndPostProcessComponent {
    }; // Size: 0x0
    Params_DestroyNiagaraAndPostProcessComponent params{};
    ProcessEvent(func, &params);
}
UNiagaraComponent* ABroomFlightVFXActor::SpawnNiagaraSystem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomFlightVFXActor.SpawnNiagaraSystem"));
    struct Params_SpawnNiagaraSystem {
        UNiagaraComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_SpawnNiagaraSystem params{};
    ProcessEvent(func, &params);
    return (UNiagaraComponent*)params.ReturnValue;
}
void ABroomFlightVFXActor::SetRadialBlurToggleParameterValue(float ToggleAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomFlightVFXActor.SetRadialBlurToggleParameterValue"));
    struct Params_SetRadialBlurToggleParameterValue {
        float ToggleAmount; // 0x0
    }; // Size: 0x4
    Params_SetRadialBlurToggleParameterValue params{};
    params.ToggleAmount = (float)ToggleAmount;
    ProcessEvent(func, &params);
}
void ABroomFlightVFXActor::SetRadialBlurParameterValues(float EffectAmount, FLinearColor TargetPos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomFlightVFXActor.SetRadialBlurParameterValues"));
    struct Params_SetRadialBlurParameterValues {
        float EffectAmount; // 0x0
        FLinearColor TargetPos; // 0x4
    }; // Size: 0x14
    Params_SetRadialBlurParameterValues params{};
    params.EffectAmount = (float)EffectAmount;
    params.TargetPos = (FLinearColor)TargetPos;
    ProcessEvent(func, &params);
}
void ABroomFlightVFXActor::SetupVFXRefs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomFlightVFXActor.SetupVFXRefs"));
    struct Params_SetupVFXRefs {
    }; // Size: 0x0
    Params_SetupVFXRefs params{};
    ProcessEvent(func, &params);
}
void ABroomFlightVFXActor::SetupGroundVFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomFlightVFXActor.SetupGroundVFX"));
    struct Params_SetupGroundVFX {
    }; // Size: 0x0
    Params_SetupGroundVFX params{};
    ProcessEvent(func, &params);
}
void ABroomFlightVFXActor::SetupBroomTrailVFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomFlightVFXActor.SetupBroomTrailVFX"));
    struct Params_SetupBroomTrailVFX {
    }; // Size: 0x0
    Params_SetupBroomTrailVFX params{};
    ProcessEvent(func, &params);
}
void ABroomFlightVFXActor::SetupBoostGainVFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomFlightVFXActor.SetupBoostGainVFX"));
    struct Params_SetupBoostGainVFX {
    }; // Size: 0x0
    Params_SetupBoostGainVFX params{};
    ProcessEvent(func, &params);
}
UPostProcessComponent* ABroomFlightVFXActor::GetPostProcess() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomFlightVFXActor.GetPostProcess"));
    struct Params_GetPostProcess {
        UPostProcessComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPostProcess params{};
    ProcessEvent(func, &params);
    return (UPostProcessComponent*)params.ReturnValue;
}
UNiagaraComponent* ABroomFlightVFXActor::GetNiagara() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomFlightVFXActor.GetNiagara"));
    struct Params_GetNiagara {
        UNiagaraComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetNiagara params{};
    ProcessEvent(func, &params);
    return (UNiagaraComponent*)params.ReturnValue;
}
AFlyingBroom* ABroomFlightVFXActor::GetBroomCapsule() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomFlightVFXActor.GetBroomCapsule"));
    struct Params_GetBroomCapsule {
        AFlyingBroom* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBroomCapsule params{};
    ProcessEvent(func, &params);
    return (AFlyingBroom*)params.ReturnValue;
}
void ABroomFlightVFXActor::CreateBroomMaterialDynamic() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomFlightVFXActor.CreateBroomMaterialDynamic"));
    struct Params_CreateBroomMaterialDynamic {
    }; // Size: 0x0
    Params_CreateBroomMaterialDynamic params{};
    ProcessEvent(func, &params);
}
