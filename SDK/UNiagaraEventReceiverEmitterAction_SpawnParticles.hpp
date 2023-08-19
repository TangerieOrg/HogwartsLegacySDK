#pragma once
#include <cstdint>
#include "UNiagaraEventReceiverEmitterAction.hpp"
#pragma pack(push, 1)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction {
public:
    uint32_t NumParticles; // 0x28
    char pad_2c[0x4];
    static UNiagaraEventReceiverEmitterAction_SpawnParticles* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
