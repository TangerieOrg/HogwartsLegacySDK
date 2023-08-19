#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceBase.hpp"
UNiagaraDataInterface* UNiagaraDataInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterface");
    return (UNiagaraDataInterface*)res;
}
