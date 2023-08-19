#include "FRichCurve.hpp"
#include "UNiagaraDataInterfaceCurveBase.hpp"
#include "UNiagaraDataInterfaceVector4Curve.hpp"
UNiagaraDataInterfaceVector4Curve* UNiagaraDataInterfaceVector4Curve::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceVector4Curve");
    return (UNiagaraDataInterfaceVector4Curve*)res;
}
