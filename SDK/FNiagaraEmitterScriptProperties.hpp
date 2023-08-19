#pragma once
#include <cstdint>
#include "FNiagaraEventGeneratorProperties.hpp"
#include "FNiagaraEventReceiverProperties.hpp"
class UNiagaraScript;
#pragma pack(push, 1)
struct FNiagaraEmitterScriptProperties {
    UNiagaraScript* Script; // 0x0
    TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
    TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
}; // Size: 0x28
#pragma pack(pop)
