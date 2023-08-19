#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceOcclusion.hpp"
UNiagaraDataInterfaceOcclusion* UNiagaraDataInterfaceOcclusion::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceOcclusion");
    return (UNiagaraDataInterfaceOcclusion*)res;
}
