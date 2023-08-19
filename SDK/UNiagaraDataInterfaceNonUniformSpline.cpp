#include "AActor.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceNonUniformSpline.hpp"
UNiagaraDataInterfaceNonUniformSpline* UNiagaraDataInterfaceNonUniformSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.NiagaraDataInterfaceNonUniformSpline");
    return (UNiagaraDataInterfaceNonUniformSpline*)res;
}
