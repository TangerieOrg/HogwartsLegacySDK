#pragma once
#include <cstdint>
#include "FNiagaraDataSetID.hpp"
#include "FNiagaraVariable.hpp"
#pragma pack(push, 1)
struct FNiagaraDataSetProperties {
    FNiagaraDataSetID ID; // 0x0
    char pad_c[0x4];
    TArray<FNiagaraVariable> Variables; // 0x10
}; // Size: 0x20
#pragma pack(pop)
