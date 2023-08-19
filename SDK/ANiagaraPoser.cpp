#include "AActor.hpp"
#include "ANiagaraPoser.hpp"
#include "UFunction.hpp"
#include "UNiagaraPoserComponent.hpp"
#include "UNiagaraSystem.hpp"
ANiagaraPoser* ANiagaraPoser::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NiagaraPoser");
    return (ANiagaraPoser*)res;
}
void ANiagaraPoser::SetNiagaraSystem(UNiagaraSystem* NiagaraSystem, bool pAutoActivate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NiagaraPoser.SetNiagaraSystem"));
    struct Params_SetNiagaraSystem {
        UNiagaraSystem* NiagaraSystem; // 0x0
        bool pAutoActivate; // 0x8
    }; // Size: 0x9
    Params_SetNiagaraSystem params{};
    params.NiagaraSystem = (UNiagaraSystem*)NiagaraSystem;
    params.pAutoActivate = (bool)pAutoActivate;
    ProcessEvent(func, &params);
}
UNiagaraSystem* ANiagaraPoser::GetNiagaraSystem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NiagaraPoser.GetNiagaraSystem"));
    struct Params_GetNiagaraSystem {
        UNiagaraSystem* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetNiagaraSystem params{};
    ProcessEvent(func, &params);
    return (UNiagaraSystem*)params.ReturnValue;
}
void ANiagaraPoser::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NiagaraPoser.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
