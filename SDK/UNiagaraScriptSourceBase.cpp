#include "UNiagaraScriptSourceBase.hpp"
#include "UObject.hpp"
UNiagaraScriptSourceBase* UNiagaraScriptSourceBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraScriptSourceBase");
    return (UNiagaraScriptSourceBase*)res;
}
