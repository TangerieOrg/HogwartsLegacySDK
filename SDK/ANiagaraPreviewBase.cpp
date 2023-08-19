#include "AActor.hpp"
#include "ANiagaraPreviewBase.hpp"
#include "UFunction.hpp"
#include "UNiagaraSystem.hpp"
ANiagaraPreviewBase* ANiagaraPreviewBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraPreviewBase");
    return (ANiagaraPreviewBase*)res;
}
void ANiagaraPreviewBase::SetLabelText() {}
void ANiagaraPreviewBase::SetSystem(UNiagaraSystem* InSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraPreviewBase.SetSystem"));
    struct Params_SetSystem {
        UNiagaraSystem* InSystem; // 0x0
    }; // Size: 0x8
    Params_SetSystem params{};
    params.InSystem = (UNiagaraSystem*)InSystem;
    ProcessEvent(func, &params);
}
