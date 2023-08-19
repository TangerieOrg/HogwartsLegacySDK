#include "FRichCurve.hpp"
#include "UNiagaraDataInterfaceCurveBase.hpp"
#include "UNiagaraDataInterfaceVectorCurve.hpp"
UNiagaraDataInterfaceVectorCurve* UNiagaraDataInterfaceVectorCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceVectorCurve");
    return (UNiagaraDataInterfaceVectorCurve*)res;
}
