#pragma once
#include <cstdint>
#include "FNiagaraVariable.hpp"
#pragma pack(push, 1)
struct FNiagaraFunctionSignature {
    FName Name; // 0x0
    TArray<FNiagaraVariable> Inputs; // 0x8
    TArray<FNiagaraVariable> Outputs; // 0x18
    FName OwnerName; // 0x28
    uint8_t bRequiresContext : 1; // 0x30
    uint8_t bRequiresExecPin : 1; // 0x30
    uint8_t bMemberFunction : 1; // 0x30
    uint8_t bExperimental : 1; // 0x30
    uint8_t bSupportsCPU : 1; // 0x30
    uint8_t bSupportsGPU : 1; // 0x30
    uint8_t bWriteFunction : 1; // 0x30
    uint8_t bSoftDeprecatedFunction : 1; // 0x30
    uint8_t bIsCompileTagGenerator : 1; // 0x31
    uint8_t bHidden : 1; // 0x31
    uint8_t pad_bitfield_31_2 : 6;
    char pad_32[0x2];
    int32_t ModuleUsageBitmask; // 0x34
    int32_t ContextStageMinIndex; // 0x38
    int32_t ContextStageMaxIndex; // 0x3c
    char pad_40[0x50];
}; // Size: 0x90
#pragma pack(pop)
