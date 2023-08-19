#include "UNiagaraPreviewAxis_InterpParamBase.hpp"
#include "UNiagaraPreviewAxis_InterpParamFloat.hpp"
UNiagaraPreviewAxis_InterpParamFloat* UNiagaraPreviewAxis_InterpParamFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat");
    return (UNiagaraPreviewAxis_InterpParamFloat*)res;
}
