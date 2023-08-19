#pragma once
#include <cstdint>
#include "FNiagaraPlatformSet.hpp"
#pragma pack(push, 1)
struct FNiagaraEmitterScalabilitySettings {
    FNiagaraPlatformSet Platforms; // 0x0
    uint8_t bScaleSpawnCount : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x3];
    float SpawnCountScale; // 0x34
}; // Size: 0x38
#pragma pack(pop)
