#include "UNiagaraPrecompileContainer.hpp"
#include "UNiagaraScript.hpp"
#include "UNiagaraSystem.hpp"
#include "UObject.hpp"
UNiagaraPrecompileContainer* UNiagaraPrecompileContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraPrecompileContainer");
    return (UNiagaraPrecompileContainer*)res;
}
