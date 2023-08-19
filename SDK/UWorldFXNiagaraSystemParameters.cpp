#include "FNiagaraHelpersInitializers.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UWorldFXNiagaraSystemParameters.hpp"
UWorldFXNiagaraSystemParameters* UWorldFXNiagaraSystemParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXNiagaraSystemParameters");
    return (UWorldFXNiagaraSystemParameters*)res;
}
void UWorldFXNiagaraSystemParameters::RefreshDefaults() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXNiagaraSystemParameters.RefreshDefaults"));
    struct Params_RefreshDefaults {
    }; // Size: 0x0
    Params_RefreshDefaults params{};
    ProcessEvent(func, &params);
}
void UWorldFXNiagaraSystemParameters::DefaultsToParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXNiagaraSystemParameters.DefaultsToParameters"));
    struct Params_DefaultsToParameters {
    }; // Size: 0x0
    Params_DefaultsToParameters params{};
    ProcessEvent(func, &params);
}
void UWorldFXNiagaraSystemParameters::ClearParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXNiagaraSystemParameters.ClearParameters"));
    struct Params_ClearParameters {
    }; // Size: 0x0
    Params_ClearParameters params{};
    ProcessEvent(func, &params);
}
