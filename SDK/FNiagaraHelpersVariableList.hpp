#pragma once
#include <cstdint>
#include "FNiagaraVariable.hpp"
#pragma pack(push, 1)
struct FNiagaraHelpersVariableList {
    char pad_0[0x8];
    TArray<FNiagaraVariable> Variables; // 0x8
}; // Size: 0x18
#pragma pack(pop)
