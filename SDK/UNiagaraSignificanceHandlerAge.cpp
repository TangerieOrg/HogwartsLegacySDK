#include "UNiagaraSignificanceHandler.hpp"
#include "UNiagaraSignificanceHandlerAge.hpp"
UNiagaraSignificanceHandlerAge* UNiagaraSignificanceHandlerAge::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraSignificanceHandlerAge");
    return (UNiagaraSignificanceHandlerAge*)res;
}
