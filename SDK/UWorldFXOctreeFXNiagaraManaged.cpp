#include "UWorldFXOctreeFX.hpp"
#include "UWorldFXOctreeFXNiagaraManaged.hpp"
UWorldFXOctreeFXNiagaraManaged* UWorldFXOctreeFXNiagaraManaged::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXOctreeFXNiagaraManaged");
    return (UWorldFXOctreeFXNiagaraManaged*)res;
}
