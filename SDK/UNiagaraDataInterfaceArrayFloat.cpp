#include "UNiagaraDataInterfaceArray.hpp"
#include "UNiagaraDataInterfaceArrayFloat.hpp"
UNiagaraDataInterfaceArrayFloat* UNiagaraDataInterfaceArrayFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceArrayFloat");
    return (UNiagaraDataInterfaceArrayFloat*)res;
}
