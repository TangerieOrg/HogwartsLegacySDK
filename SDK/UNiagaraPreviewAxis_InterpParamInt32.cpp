#include "UNiagaraPreviewAxis_InterpParamBase.hpp"
#include "UNiagaraPreviewAxis_InterpParamInt32.hpp"
UNiagaraPreviewAxis_InterpParamInt32* UNiagaraPreviewAxis_InterpParamInt32::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32");
    return (UNiagaraPreviewAxis_InterpParamInt32*)res;
}
