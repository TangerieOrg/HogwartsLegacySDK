#include "FRichCurve.hpp"
#include "UNiagaraDataInterfaceColorCurve.hpp"
#include "UNiagaraDataInterfaceCurveBase.hpp"
UNiagaraDataInterfaceColorCurve* UNiagaraDataInterfaceColorCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceColorCurve");
    return (UNiagaraDataInterfaceColorCurve*)res;
}
