#include "UWorldFXNiagaraSystemInitializer.hpp"
#include "UWorldFXNiagaraSystemInitializerParametersAsset.hpp"
#include "UWorldFXNiagaraSystemParameters.hpp"
UWorldFXNiagaraSystemInitializerParametersAsset* UWorldFXNiagaraSystemInitializerParametersAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXNiagaraSystemInitializerParametersAsset");
    return (UWorldFXNiagaraSystemInitializerParametersAsset*)res;
}
