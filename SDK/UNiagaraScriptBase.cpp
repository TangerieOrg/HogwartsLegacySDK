#include "UNiagaraScriptBase.hpp"
#include "UObject.hpp"
UNiagaraScriptBase* UNiagaraScriptBase::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraShader.NiagaraScriptBase");
    return (UNiagaraScriptBase*)res;
}
