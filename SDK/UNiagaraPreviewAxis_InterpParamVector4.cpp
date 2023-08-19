#include "FVector4.hpp"
#include "UNiagaraPreviewAxis_InterpParamBase.hpp"
#include "UNiagaraPreviewAxis_InterpParamVector4.hpp"
UNiagaraPreviewAxis_InterpParamVector4* UNiagaraPreviewAxis_InterpParamVector4::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4");
    return (UNiagaraPreviewAxis_InterpParamVector4*)res;
}
