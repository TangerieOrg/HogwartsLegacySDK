#include "UNiagaraComponentPool.hpp"
#include "UObject.hpp"
UNiagaraComponentPool* UNiagaraComponentPool::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraComponentPool");
    return (UNiagaraComponentPool*)res;
}
