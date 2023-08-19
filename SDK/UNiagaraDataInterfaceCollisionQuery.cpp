#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceCollisionQuery.hpp"
UNiagaraDataInterfaceCollisionQuery* UNiagaraDataInterfaceCollisionQuery::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery");
    return (UNiagaraDataInterfaceCollisionQuery*)res;
}
