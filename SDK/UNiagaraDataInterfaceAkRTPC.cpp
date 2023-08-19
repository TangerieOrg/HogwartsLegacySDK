#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceAkRTPC.hpp"
UNiagaraDataInterfaceAkRTPC* UNiagaraDataInterfaceAkRTPC::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraHelpers.NiagaraDataInterfaceAkRTPC");
    return (UNiagaraDataInterfaceAkRTPC*)res;
}
