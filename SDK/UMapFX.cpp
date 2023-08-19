#include "UFunction.hpp"
#include "UMapFX.hpp"
#include "UMapFXBase.hpp"
#include "UNiagaraComponent.hpp"
UMapFX* UMapFX::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapFX");
    return (UMapFX*)res;
}
void UMapFX::OnFinished(UNiagaraComponent* PSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapFX.OnFinished"));
    struct Params_OnFinished {
        UNiagaraComponent* PSystem; // 0x0
    }; // Size: 0x8
    Params_OnFinished params{};
    params.PSystem = (UNiagaraComponent*)PSystem;
    ProcessEvent(func, &params);
}
