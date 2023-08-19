#include "UNiagaraSignificanceHandler.hpp"
#include "UObject.hpp"
UNiagaraSignificanceHandler* UNiagaraSignificanceHandler::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraSignificanceHandler");
    return (UNiagaraSignificanceHandler*)res;
}
