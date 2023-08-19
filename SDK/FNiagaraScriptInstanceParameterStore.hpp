#pragma once
#include <cstdint>
#include "FNiagaraParameterStore.hpp"
#pragma pack(push, 1)
struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore {
    char pad_78[0x10];
}; // Size: 0x88
#pragma pack(pop)
