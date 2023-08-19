#include "FNiagaraMaterialDriverSetup.hpp"
#include "FNiagaraMaterialDriverState.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraMaterialDriver.hpp"
#include "UObject.hpp"
void UNiagaraMaterialDriver::OnNiagaraSystemFinished(UNiagaraComponent* PSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.NiagaraMaterialDriver.OnNiagaraSystemFinished"));
    struct Params_OnNiagaraSystemFinished {
        UNiagaraComponent* PSystem; // 0x0
    }; // Size: 0x8
    Params_OnNiagaraSystemFinished params{};
    params.PSystem = (UNiagaraComponent*)PSystem;
    ProcessEvent(func, &params);
}
UNiagaraMaterialDriver* UNiagaraMaterialDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.NiagaraMaterialDriver");
    return (UNiagaraMaterialDriver*)res;
}
