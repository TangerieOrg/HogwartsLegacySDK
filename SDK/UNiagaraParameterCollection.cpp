#include "FGuid.hpp"
#include "FNiagaraVariable.hpp"
#include "UMaterialParameterCollection.hpp"
#include "UNiagaraParameterCollection.hpp"
#include "UNiagaraParameterCollectionInstance.hpp"
#include "UObject.hpp"
UNiagaraParameterCollection* UNiagaraParameterCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraParameterCollection");
    return (UNiagaraParameterCollection*)res;
}
