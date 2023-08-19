#pragma once
#include <cstdint>
#include "FNiagaraSystemSpawnAttachedInfoOverride.hpp"
#pragma pack(push, 1)
struct FNiagaraSystemSpawnAttachedPointInfoOverride : public FNiagaraSystemSpawnAttachedInfoOverride {
    uint8_t bOverride_AttachPoint : 1; // 0x30
    uint8_t bOverride_FailOnAttachPointMissing : 1; // 0x30
    uint8_t bOverride_DeepSearchComponents : 1; // 0x30
    uint8_t pad_bitfield_30_3 : 5;
    char pad_31[0x3];
    FName AttachPoint; // 0x34
    bool bFailOnAttachPointMissing; // 0x3c
    bool bDeepSearchComponents; // 0x3d
    char pad_3e[0x2];
}; // Size: 0x40
#pragma pack(pop)
