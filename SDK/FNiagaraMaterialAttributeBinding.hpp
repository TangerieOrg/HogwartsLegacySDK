#pragma once
#include <cstdint>
#include "FNiagaraVariableBase.hpp"
#pragma pack(push, 1)
struct FNiagaraMaterialAttributeBinding {
    FName MaterialParameterName; // 0x0
    FNiagaraVariableBase NiagaraVariable; // 0x8
    FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14
    FNiagaraVariableBase NiagaraChildVariable; // 0x20
}; // Size: 0x2c
#pragma pack(pop)
