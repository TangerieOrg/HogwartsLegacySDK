#pragma once
#include <cstdint>
#include "FNiagaraParameterStore.hpp"
#pragma pack(push, 1)
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore {
    char pad_78[0x50];
}; // Size: 0xc8
#pragma pack(pop)
