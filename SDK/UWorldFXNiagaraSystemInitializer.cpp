#include "UObject.hpp"
#include "UWorldFXNiagaraSystemInitializer.hpp"
UWorldFXNiagaraSystemInitializer* UWorldFXNiagaraSystemInitializer::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXNiagaraSystemInitializer");
    return (UWorldFXNiagaraSystemInitializer*)res;
}
