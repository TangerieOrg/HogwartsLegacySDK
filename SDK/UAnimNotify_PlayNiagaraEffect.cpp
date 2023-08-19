#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimNotify.hpp"
#include "UAnimNotify_PlayNiagaraEffect.hpp"
#include "UFXSystemComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraSystem.hpp"
UAnimNotify_PlayNiagaraEffect* UAnimNotify_PlayNiagaraEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect");
    return (UAnimNotify_PlayNiagaraEffect*)res;
}
UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect"));
    struct Params_GetSpawnedEffect {
        UFXSystemComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpawnedEffect params{};
    ProcessEvent(func, &params);
    return (UFXSystemComponent*)params.ReturnValue;
}
