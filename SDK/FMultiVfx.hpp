#pragma once
#include <cstdint>
#include "FMultiBase.hpp"
class UParticleSystem;
class UNiagaraSystem;
#pragma pack(push, 1)
struct FMultiVfx : public FMultiBase {
    UParticleSystem* VFX; // 0x8
    UNiagaraSystem* NiagaraVFX; // 0x10
}; // Size: 0x18
#pragma pack(pop)
