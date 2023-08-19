#include "FRichCurve.hpp"
#include "UNiagaraDataInterfaceCurve.hpp"
#include "UNiagaraDataInterfaceCurveBase.hpp"
UNiagaraDataInterfaceCurve* UNiagaraDataInterfaceCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceCurve");
    return (UNiagaraDataInterfaceCurve*)res;
}
