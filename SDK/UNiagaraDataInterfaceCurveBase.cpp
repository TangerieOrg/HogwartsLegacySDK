#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceCurveBase.hpp"
#include "UTexture2D.hpp"
UNiagaraDataInterfaceCurveBase* UNiagaraDataInterfaceCurveBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceCurveBase");
    return (UNiagaraDataInterfaceCurveBase*)res;
}
