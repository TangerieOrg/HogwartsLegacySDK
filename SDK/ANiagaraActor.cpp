#include "AActor.hpp"
#include "ANiagaraActor.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
ANiagaraActor* ANiagaraActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraActor");
    return (ANiagaraActor*)res;
}
void ANiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish"));
    struct Params_SetDestroyOnSystemFinish {
        bool bShouldDestroyOnSystemFinish; // 0x0
    }; // Size: 0x1
    Params_SetDestroyOnSystemFinish params{};
    params.bShouldDestroyOnSystemFinish = (bool)bShouldDestroyOnSystemFinish;
    ProcessEvent(func, &params);
}
void ANiagaraActor::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished"));
    struct Params_OnNiagaraSystemFinished {
        UNiagaraComponent* FinishedComponent; // 0x0
    }; // Size: 0x8
    Params_OnNiagaraSystemFinished params{};
    params.FinishedComponent = (UNiagaraComponent*)FinishedComponent;
    ProcessEvent(func, &params);
}
