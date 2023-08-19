#pragma once
#include <cstdint>
#include "FNiagaraHelpersPrimFilter.hpp"
#include "FNiagaraSystemSpawnAttachedInfo.hpp"
#include "UMultiFX2_NiagraSpawnInfoBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_NiagraPrimSpawnInfo : public UMultiFX2_NiagraSpawnInfoBase {
public:
    FNiagaraHelpersPrimFilter Filter; // 0x30
    char pad_48[0x8];
    FNiagaraSystemSpawnAttachedInfo SpawnInfo; // 0x50
    static UMultiFX2_NiagraPrimSpawnInfo* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
