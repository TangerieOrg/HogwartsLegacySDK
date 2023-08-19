#pragma once
#include <cstdint>
#include "EAttachLocation\Type.hpp"
#include "FNiagaraSystemSpawnInfoOverride.hpp"
#pragma pack(push, 1)
struct FNiagaraSystemSpawnAttachedInfoOverride : public FNiagaraSystemSpawnInfoOverride {
    uint8_t bOverride_AttachLocation : 1; // 0x2c
    uint8_t pad_bitfield_2c_1 : 7;
    EAttachLocation::Type AttachLocation; // 0x2d
    char pad_2e[0x2];
}; // Size: 0x30
#pragma pack(pop)
