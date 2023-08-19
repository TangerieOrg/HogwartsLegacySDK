#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialParameterCollection.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraStarrySkyComponent.hpp"
#include "UNiagaraSystem.hpp"
UNiagaraStarrySkyComponent* UNiagaraStarrySkyComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.NiagaraStarrySkyComponent");
    return (UNiagaraStarrySkyComponent*)res;
}
void UNiagaraStarrySkyComponent::LoadSystem() {}
void UNiagaraStarrySkyComponent::SetSystem(UNiagaraSystem* NiagaraSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.NiagaraStarrySkyComponent.SetSystem"));
    struct Params_SetSystem {
        UNiagaraSystem* NiagaraSystem; // 0x0
    }; // Size: 0x8
    Params_SetSystem params{};
    params.NiagaraSystem = (UNiagaraSystem*)NiagaraSystem;
    ProcessEvent(func, &params);
}
void UNiagaraStarrySkyComponent::IsLoadedSystem() {}
