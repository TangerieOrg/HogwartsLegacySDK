#include "FNiagaraHelpersInitializers.hpp"
#include "UWorldFXNiagaraSystemInitializer.hpp"
#include "UWorldFXNiagaraSystemInitializerParameters.hpp"
UWorldFXNiagaraSystemInitializerParameters* UWorldFXNiagaraSystemInitializerParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXNiagaraSystemInitializerParameters");
    return (UWorldFXNiagaraSystemInitializerParameters*)res;
}
