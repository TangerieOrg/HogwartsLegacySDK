#include "FLinearColor.hpp"
#include "UNiagaraPreviewAxis_InterpParamBase.hpp"
#include "UNiagaraPreviewAxis_InterpParamLinearColor.hpp"
UNiagaraPreviewAxis_InterpParamLinearColor* UNiagaraPreviewAxis_InterpParamLinearColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
    return (UNiagaraPreviewAxis_InterpParamLinearColor*)res;
}
