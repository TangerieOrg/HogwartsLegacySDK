#include "UNiagaraPreviewAxis.hpp"
#include "UNiagaraPreviewAxis_InterpParamBase.hpp"
UNiagaraPreviewAxis_InterpParamBase* UNiagaraPreviewAxis_InterpParamBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase");
    return (UNiagaraPreviewAxis_InterpParamBase*)res;
}
