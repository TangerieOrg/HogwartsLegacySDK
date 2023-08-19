#include "FNiagaraMaterialDriverSetup.hpp"
#include "FNiagaraMaterialDriverState.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraMaterialDriverComponent.hpp"
#include "USceneComponent.hpp"
UNiagaraMaterialDriverComponent* UNiagaraMaterialDriverComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.NiagaraMaterialDriverComponent");
    return (UNiagaraMaterialDriverComponent*)res;
}
void UNiagaraMaterialDriverComponent::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.NiagaraMaterialDriverComponent.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
void UNiagaraMaterialDriverComponent::OnNiagaraSystemFinished(UNiagaraComponent* PSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.NiagaraMaterialDriverComponent.OnNiagaraSystemFinished"));
    struct Params_OnNiagaraSystemFinished {
        UNiagaraComponent* PSystem; // 0x0
    }; // Size: 0x8
    Params_OnNiagaraSystemFinished params{};
    params.PSystem = (UNiagaraComponent*)PSystem;
    ProcessEvent(func, &params);
}
