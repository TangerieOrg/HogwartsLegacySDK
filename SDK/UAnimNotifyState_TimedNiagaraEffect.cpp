#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimNotifyState.hpp"
#include "UAnimNotifyState_TimedNiagaraEffect.hpp"
#include "UFXSystemComponent.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "UNiagaraSystem.hpp"
UAnimNotifyState_TimedNiagaraEffect* UAnimNotifyState_TimedNiagaraEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect");
    return (UAnimNotifyState_TimedNiagaraEffect*)res;
}
UFXSystemComponent* UAnimNotifyState_TimedNiagaraEffect::GetSpawnedEffect(UMeshComponent* MeshComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect"));
    struct Params_GetSpawnedEffect {
        UMeshComponent* MeshComp; // 0x0
        UFXSystemComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSpawnedEffect params{};
    params.MeshComp = (UMeshComponent*)MeshComp;
    ProcessEvent(func, &params);
    return (UFXSystemComponent*)params.ReturnValue;
}
