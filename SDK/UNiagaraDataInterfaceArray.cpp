#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceArray.hpp"
UNiagaraDataInterfaceArray* UNiagaraDataInterfaceArray::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceArray");
    return (UNiagaraDataInterfaceArray*)res;
}
