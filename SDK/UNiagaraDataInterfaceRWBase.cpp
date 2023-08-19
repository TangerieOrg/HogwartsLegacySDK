#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
UNiagaraDataInterfaceRWBase* UNiagaraDataInterfaceRWBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceRWBase");
    return (UNiagaraDataInterfaceRWBase*)res;
}
