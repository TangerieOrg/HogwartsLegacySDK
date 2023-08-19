#pragma once
#include <cstdint>
#include "UNiagaraHelpersFullVariableListCacheEntry.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class UNiagaraHelpersFullVariableListCacheEntryDynamic : public UNiagaraHelpersFullVariableListCacheEntry {
public:
    UNiagaraComponent* ProbeComponent; // 0x2b0
    char pad_2b8[0x8];
    static UNiagaraHelpersFullVariableListCacheEntryDynamic* StaticClass();
    void OnFinished();
}; // Size: 0x2c0
#pragma pack(pop)
