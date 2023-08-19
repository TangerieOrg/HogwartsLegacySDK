#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceGBuffer.hpp"
UNiagaraDataInterfaceGBuffer* UNiagaraDataInterfaceGBuffer::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceGBuffer");
    return (UNiagaraDataInterfaceGBuffer*)res;
}
