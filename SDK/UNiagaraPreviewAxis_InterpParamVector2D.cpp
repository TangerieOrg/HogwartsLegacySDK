#include "FVector2D.hpp"
#include "UNiagaraPreviewAxis_InterpParamBase.hpp"
#include "UNiagaraPreviewAxis_InterpParamVector2D.hpp"
UNiagaraPreviewAxis_InterpParamVector2D* UNiagaraPreviewAxis_InterpParamVector2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D");
    return (UNiagaraPreviewAxis_InterpParamVector2D*)res;
}
