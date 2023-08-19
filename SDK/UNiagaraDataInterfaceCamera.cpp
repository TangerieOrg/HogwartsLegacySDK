#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceCamera.hpp"
UNiagaraDataInterfaceCamera* UNiagaraDataInterfaceCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceCamera");
    return (UNiagaraDataInterfaceCamera*)res;
}
