#pragma once
#include <cstdint>
#include "FNiagaraHelpersPrimFilter.hpp"
#include "FNiagaraSystemSpawnMultiStaticInfo.hpp"
#include "UMultiFX2_NiagraSpawnInfoBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_NiagraStaticalSpawnInfo : public UMultiFX2_NiagraSpawnInfoBase {
public:
    FNiagaraHelpersPrimFilter Filter; // 0x30
    char pad_48[0x8];
    FNiagaraSystemSpawnMultiStaticInfo SpawnInfo; // 0x50
    static UMultiFX2_NiagraStaticalSpawnInfo* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
