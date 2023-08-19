#include "AActor.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceSpline.hpp"
UNiagaraDataInterfaceSpline* UNiagaraDataInterfaceSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceSpline");
    return (UNiagaraDataInterfaceSpline*)res;
}
