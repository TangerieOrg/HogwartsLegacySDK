#pragma once
#include <cstdint>
#include "FWorldFXAudioEvent.hpp"
#include "FWorldFXCascadeSystem.hpp"
#include "FWorldFXNiagaraSystem.hpp"
#pragma pack(push, 1)
struct FWorldFXFull {
    FWorldFXAudioEvent SFX; // 0x0
    FWorldFXCascadeSystem CascadeFX; // 0x60
    FWorldFXNiagaraSystem NiagaraFX; // 0xc8
}; // Size: 0x120
#pragma pack(pop)
