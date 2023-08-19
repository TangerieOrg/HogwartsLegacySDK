#pragma once
#include <cstdint>
#include "FNiagaraParameterStore.hpp"
#include "FNiagaraScriptExecutionPaddingInfo.hpp"
#pragma pack(push, 1)
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore {
    int32_t ParameterSize; // 0x78
    uint32_t PaddedParameterSize; // 0x7c
    TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80
    uint8_t bInitialized : 1; // 0x90
    uint8_t pad_bitfield_90_1 : 7;
    char pad_91[0x7];
}; // Size: 0x98
#pragma pack(pop)
