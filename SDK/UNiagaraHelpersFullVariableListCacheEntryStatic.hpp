#pragma once
#include <cstdint>
#include "UNiagaraHelpersFullVariableListCacheEntry.hpp"
#pragma pack(push, 1)
class UNiagaraHelpersFullVariableListCacheEntryStatic : public UNiagaraHelpersFullVariableListCacheEntry {
public:
    static UNiagaraHelpersFullVariableListCacheEntryStatic* StaticClass();
}; // Size: 0x2b0
#pragma pack(pop)
