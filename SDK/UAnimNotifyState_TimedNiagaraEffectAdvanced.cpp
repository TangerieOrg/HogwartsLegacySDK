#include "UAnimNotifyState_TimedNiagaraEffect.hpp"
#include "UAnimNotifyState_TimedNiagaraEffectAdvanced.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
UAnimNotifyState_TimedNiagaraEffectAdvanced* UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced");
    return (UAnimNotifyState_TimedNiagaraEffectAdvanced*)res;
}
float UAnimNotifyState_TimedNiagaraEffectAdvanced::GetNotifyProgress(UMeshComponent* MeshComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress"));
    struct Params_GetNotifyProgress {
        UMeshComponent* MeshComp; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetNotifyProgress params{};
    params.MeshComp = (UMeshComponent*)MeshComp;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
