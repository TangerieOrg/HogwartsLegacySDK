#include "FDateTime.hpp"
#include "FNiagaraHelpersFullVariableList.hpp"
#include "UNiagaraHelpersFullVariableListCacheEntry.hpp"
#include "UNiagaraSystem.hpp"
#include "UObject.hpp"
UNiagaraHelpersFullVariableListCacheEntry* UNiagaraHelpersFullVariableListCacheEntry::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraHelpers.NiagaraHelpersFullVariableListCacheEntry");
    return (UNiagaraHelpersFullVariableListCacheEntry*)res;
}
