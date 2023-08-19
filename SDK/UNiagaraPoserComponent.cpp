#include "FNiagraPoserBone.hpp"
#include "FNiagraPoserSetup.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraPoserComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UPoseableMeshComponent.hpp"
#include "USceneComponent.hpp"
UNiagaraPoserComponent* UNiagaraPoserComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NiagaraPoserComponent");
    return (UNiagaraPoserComponent*)res;
}
void UNiagaraPoserComponent::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NiagaraPoserComponent.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
void UNiagaraPoserComponent::CreateNiagaraSystem(UNiagaraSystem* NiagaraSystem, bool pAutoActivate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NiagaraPoserComponent.CreateNiagaraSystem"));
    struct Params_CreateNiagaraSystem {
        UNiagaraSystem* NiagaraSystem; // 0x0
        bool pAutoActivate; // 0x8
    }; // Size: 0x9
    Params_CreateNiagaraSystem params{};
    params.NiagaraSystem = (UNiagaraSystem*)NiagaraSystem;
    params.pAutoActivate = (bool)pAutoActivate;
    ProcessEvent(func, &params);
}
