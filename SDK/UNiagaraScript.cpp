#include "ENiagaraScriptUsage.hpp"
#include "FGuid.hpp"
#include "FNiagaraBoundParameter.hpp"
#include "FNiagaraParameterStore.hpp"
#include "FNiagaraScriptDataInterfaceInfo.hpp"
#include "FNiagaraScriptExecutionParameterStore.hpp"
#include "FNiagaraVMExecutableData.hpp"
#include "FNiagaraVMExecutableDataId.hpp"
#include "UFunction.hpp"
#include "UNiagaraParameterCollection.hpp"
#include "UNiagaraScript.hpp"
#include "UNiagaraScriptBase.hpp"
UNiagaraScript* UNiagaraScript::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraScript");
    return (UNiagaraScript*)res;
}
void UNiagaraScript::RaiseOnGPUCompilationComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete"));
    struct Params_RaiseOnGPUCompilationComplete {
    }; // Size: 0x0
    Params_RaiseOnGPUCompilationComplete params{};
    ProcessEvent(func, &params);
}
