#pragma once
#include <cstdint>
#include "FNiagaraHelpersPrimFilter.hpp"
#include "FNiagaraSystemSpawnMultiSkeletalInfo.hpp"
#include "UMultiFX2_NiagraSpawnInfoBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_NiagraSkeletalSpawnInfo : public UMultiFX2_NiagraSpawnInfoBase {
public:
    FNiagaraHelpersPrimFilter Filter; // 0x30
    char pad_48[0x8];
    FNiagaraSystemSpawnMultiSkeletalInfo SpawnInfo; // 0x50
    static UMultiFX2_NiagraSkeletalSpawnInfo* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
