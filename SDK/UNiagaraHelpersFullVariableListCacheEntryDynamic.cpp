#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraHelpersFullVariableListCacheEntry.hpp"
#include "UNiagaraHelpersFullVariableListCacheEntryDynamic.hpp"
UNiagaraHelpersFullVariableListCacheEntryDynamic* UNiagaraHelpersFullVariableListCacheEntryDynamic::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraHelpers.NiagaraHelpersFullVariableListCacheEntryDynamic");
    return (UNiagaraHelpersFullVariableListCacheEntryDynamic*)res;
}
void UNiagaraHelpersFullVariableListCacheEntryDynamic::OnFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraHelpers.NiagaraHelpersFullVariableListCacheEntryDynamic.OnFinished"));
    struct Params_OnFinished {
    }; // Size: 0x0
    Params_OnFinished params{};
    ProcessEvent(func, &params);
}
