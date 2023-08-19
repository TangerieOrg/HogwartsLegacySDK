#include "UNiagaraParameterDefinitionsBase.hpp"
#include "UObject.hpp"
UNiagaraParameterDefinitionsBase* UNiagaraParameterDefinitionsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraParameterDefinitionsBase");
    return (UNiagaraParameterDefinitionsBase*)res;
}
