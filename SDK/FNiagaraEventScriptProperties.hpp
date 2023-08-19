#pragma once
#include <cstdint>
#include "EScriptExecutionMode.hpp"
#include "FGuid.hpp"
#include "FNiagaraEmitterScriptProperties.hpp"
#pragma pack(push, 1)
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties {
    EScriptExecutionMode ExecutionMode; // 0x28
    char pad_29[0x3];
    uint32_t SpawnNumber; // 0x2c
    uint32_t MaxEventsPerFrame; // 0x30
    FGuid SourceEmitterID; // 0x34
    FName SourceEventName; // 0x44
    bool bRandomSpawnNumber; // 0x4c
    char pad_4d[0x3];
    uint32_t MinSpawnNumber; // 0x50
    char pad_54[0x4];
}; // Size: 0x58
#pragma pack(pop)
