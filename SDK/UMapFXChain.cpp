#include "UFunction.hpp"
#include "UMapFXBase.hpp"
#include "UMapFXChain.hpp"
#include "UNiagaraComponent.hpp"
UMapFXChain* UMapFXChain::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapFXChain");
    return (UMapFXChain*)res;
}
void UMapFXChain::OnFinished(UNiagaraComponent* PSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapFXChain.OnFinished"));
    struct Params_OnFinished {
        UNiagaraComponent* PSystem; // 0x0
    }; // Size: 0x8
    Params_OnFinished params{};
    params.PSystem = (UNiagaraComponent*)PSystem;
    ProcessEvent(func, &params);
}
void UMapFXChain::FXTimerCallback() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapFXChain.FXTimerCallback"));
    struct Params_FXTimerCallback {
    }; // Size: 0x0
    Params_FXTimerCallback params{};
    ProcessEvent(func, &params);
}
