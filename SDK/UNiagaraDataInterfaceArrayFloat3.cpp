#include "FVector.hpp"
#include "UNiagaraDataInterfaceArray.hpp"
#include "UNiagaraDataInterfaceArrayFloat3.hpp"
UNiagaraDataInterfaceArrayFloat3* UNiagaraDataInterfaceArrayFloat3::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3");
    return (UNiagaraDataInterfaceArrayFloat3*)res;
}
