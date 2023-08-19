#include "UNiagaraDataInterfaceArray.hpp"
#include "UNiagaraDataInterfaceArrayInt32.hpp"
UNiagaraDataInterfaceArrayInt32* UNiagaraDataInterfaceArrayInt32::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceArrayInt32");
    return (UNiagaraDataInterfaceArrayInt32*)res;
}
