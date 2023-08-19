#include "FNiagaraHelpersInitializerRaw.hpp"
#include "UWorldFXNiagaraSystemInitializer.hpp"
#include "UWorldFXNiagaraSystemInitializerRawParameters.hpp"
UWorldFXNiagaraSystemInitializerRawParameters* UWorldFXNiagaraSystemInitializerRawParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXNiagaraSystemInitializerRawParameters");
    return (UWorldFXNiagaraSystemInitializerRawParameters*)res;
}
