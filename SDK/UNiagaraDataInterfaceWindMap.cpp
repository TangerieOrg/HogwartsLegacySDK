#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceWindMap.hpp"
UNiagaraDataInterfaceWindMap* UNiagaraDataInterfaceWindMap::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.NiagaraDataInterfaceWindMap");
    return (UNiagaraDataInterfaceWindMap*)res;
}
