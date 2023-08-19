#pragma once
#include <cstdint>
#include "FNiagaraSystemSpawnAttachedInfo.hpp"
#pragma pack(push, 1)
struct FNiagaraSystemSpawnAttachedPointInfo : public FNiagaraSystemSpawnAttachedInfo {
    bool bFailOnAttachPointMissing; // 0x70
    bool bDeepSearchComponents; // 0x71
    char pad_72[0xe];
}; // Size: 0x80
#pragma pack(pop)
