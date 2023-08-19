#include "FNiagaraPlatformSet.hpp"
#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfacePlatformSet.hpp"
UNiagaraDataInterfacePlatformSet* UNiagaraDataInterfacePlatformSet::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfacePlatformSet");
    return (UNiagaraDataInterfacePlatformSet*)res;
}
