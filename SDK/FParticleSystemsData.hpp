#pragma once
#include <cstdint>
#include "FNiagaraSystemTrigger.hpp"
#include "FParticleSystemTrigger.hpp"
#pragma pack(push, 1)
struct FParticleSystemsData {
    TArray<FParticleSystemTrigger> ParticleSystems; // 0x0
    TArray<FNiagaraSystemTrigger> NiagaraSystems; // 0x10
}; // Size: 0x20
#pragma pack(pop)
