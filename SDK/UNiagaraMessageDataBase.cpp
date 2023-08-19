#include "UNiagaraMessageDataBase.hpp"
#include "UObject.hpp"
UNiagaraMessageDataBase* UNiagaraMessageDataBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraMessageDataBase");
    return (UNiagaraMessageDataBase*)res;
}
