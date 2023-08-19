#pragma once
#include <cstdint>
#include "ENiagaraExecutionState.hpp"
#include "ENiagaraSimTarget.hpp"
#pragma pack(push, 1)
struct FNiagaraOutlinerEmitterInstanceData {
    FString EmitterName; // 0x0
    ENiagaraSimTarget SimTarget; // 0x10
    char pad_11[0x3];
    ENiagaraExecutionState ExecState; // 0x14
    int32_t NumParticles; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
