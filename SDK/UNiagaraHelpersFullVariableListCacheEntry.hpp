#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FNiagaraHelpersFullVariableList.hpp"
#include "UObject.hpp"
class UNiagaraSystem;
#pragma pack(push, 1)
class UNiagaraHelpersFullVariableListCacheEntry : public UObject {
public:
    UNiagaraSystem* System; // 0x28
    FNiagaraHelpersFullVariableList FullVariableList; // 0x30
    FDateTime CacheTime; // 0x2a0
    bool bHaveSetupVariables; // 0x2a8
    char pad_2a9[0x7];
    static UNiagaraHelpersFullVariableListCacheEntry* StaticClass();
}; // Size: 0x2b0
#pragma pack(pop)
