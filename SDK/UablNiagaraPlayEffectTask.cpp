#include "UAblAbilityTask.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UablNiagaraPlayEffectTask.hpp"
UablNiagaraPlayEffectTask* UablNiagaraPlayEffectTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNiagaraPlayEffectTask");
    return (UablNiagaraPlayEffectTask*)res;
}
void UablNiagaraPlayEffectTask::DestroyNiagraEffects(UNiagaraComponent* InNiagaraComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ablNiagaraPlayEffectTask.DestroyNiagraEffects"));
    struct Params_DestroyNiagraEffects {
        UNiagaraComponent* InNiagaraComponent; // 0x0
    }; // Size: 0x8
    Params_DestroyNiagraEffects params{};
    params.InNiagaraComponent = (UNiagaraComponent*)InNiagaraComponent;
    ProcessEvent(func, &params);
}
