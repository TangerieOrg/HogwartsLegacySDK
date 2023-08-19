#pragma once
#include <cstdint>
#include "FNiagaraVariable.hpp"
#pragma pack(push, 1)
struct FNiagaraParameters {
    TArray<FNiagaraVariable> Parameters; // 0x0
}; // Size: 0x10
#pragma pack(pop)
