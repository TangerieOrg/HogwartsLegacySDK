#include "UNiagaraSignificanceHandler.hpp"
#include "UNiagaraSignificanceHandlerDistance.hpp"
UNiagaraSignificanceHandlerDistance* UNiagaraSignificanceHandlerDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraSignificanceHandlerDistance");
    return (UNiagaraSignificanceHandlerDistance*)res;
}
