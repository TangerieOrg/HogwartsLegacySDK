#include "UNiagaraDataInterfaceBase.hpp"
#include "UNiagaraMergeable.hpp"
UNiagaraDataInterfaceBase* UNiagaraDataInterfaceBase::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraCore.NiagaraDataInterfaceBase");
    return (UNiagaraDataInterfaceBase*)res;
}
