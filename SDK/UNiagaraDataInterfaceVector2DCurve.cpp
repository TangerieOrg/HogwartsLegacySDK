#include "FRichCurve.hpp"
#include "UNiagaraDataInterfaceCurveBase.hpp"
#include "UNiagaraDataInterfaceVector2DCurve.hpp"
UNiagaraDataInterfaceVector2DCurve* UNiagaraDataInterfaceVector2DCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve");
    return (UNiagaraDataInterfaceVector2DCurve*)res;
}
