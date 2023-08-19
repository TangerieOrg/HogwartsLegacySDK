#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceInsideAndWind.hpp"
UNiagaraDataInterfaceInsideAndWind* UNiagaraDataInterfaceInsideAndWind::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraHelpers.NiagaraDataInterfaceInsideAndWind");
    return (UNiagaraDataInterfaceInsideAndWind*)res;
}
