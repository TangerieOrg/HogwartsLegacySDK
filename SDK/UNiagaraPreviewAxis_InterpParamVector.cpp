#include "FVector.hpp"
#include "UNiagaraPreviewAxis_InterpParamBase.hpp"
#include "UNiagaraPreviewAxis_InterpParamVector.hpp"
UNiagaraPreviewAxis_InterpParamVector* UNiagaraPreviewAxis_InterpParamVector::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector");
    return (UNiagaraPreviewAxis_InterpParamVector*)res;
}
