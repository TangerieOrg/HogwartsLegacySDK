#pragma once
#include <cstdint>
#include "FNiagaraEmitterScalabilitySettings.hpp"
#pragma pack(push, 1)
struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings {
    uint8_t bOverrideSpawnCountScale : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x7];
}; // Size: 0x40
#pragma pack(pop)
