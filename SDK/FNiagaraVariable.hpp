#pragma once
#include <cstdint>
#include "FNiagaraVariableBase.hpp"
#pragma pack(push, 1)
struct FNiagaraVariable : public FNiagaraVariableBase {
    char pad_c[0x4];
    TArray<uint8_t> VarData; // 0x10
}; // Size: 0x20
#pragma pack(pop)
