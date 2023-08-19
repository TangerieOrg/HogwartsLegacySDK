#include "FQuat.hpp"
#include "UNiagaraDataInterfaceArray.hpp"
#include "UNiagaraDataInterfaceArrayQuat.hpp"
UNiagaraDataInterfaceArrayQuat* UNiagaraDataInterfaceArrayQuat::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceArrayQuat");
    return (UNiagaraDataInterfaceArrayQuat*)res;
}
