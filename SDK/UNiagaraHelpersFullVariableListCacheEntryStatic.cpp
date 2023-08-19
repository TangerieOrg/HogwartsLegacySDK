#include "UNiagaraHelpersFullVariableListCacheEntry.hpp"
#include "UNiagaraHelpersFullVariableListCacheEntryStatic.hpp"
UNiagaraHelpersFullVariableListCacheEntryStatic* UNiagaraHelpersFullVariableListCacheEntryStatic::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraHelpers.NiagaraHelpersFullVariableListCacheEntryStatic");
    return (UNiagaraHelpersFullVariableListCacheEntryStatic*)res;
}
