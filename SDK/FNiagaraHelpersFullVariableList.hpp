#pragma once
#include <cstdint>
#include "FNiagaraHelpersEmitterVariableList.hpp"
#include "FNiagaraHelpersVariableList.hpp"
#include "FNiagaraHelpersVariableValueStore.hpp"
#pragma pack(push, 1)
struct FNiagaraHelpersFullVariableList {
    FNiagaraHelpersVariableList UserVariables; // 0x0
    FNiagaraHelpersVariableList SystemVariables; // 0x18
    TArray<FNiagaraHelpersEmitterVariableList> EmitterVariables; // 0x30
    FNiagaraHelpersVariableValueStore DefaultValues; // 0x40
}; // Size: 0x270
#pragma pack(pop)
