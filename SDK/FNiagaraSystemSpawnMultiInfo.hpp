#pragma once
#include <cstdint>
#include "ENiagaraHelpersMultiSpawnRateType.hpp"
#include "FNiagaraSystemSpawnAttachedInfo.hpp"
#pragma pack(push, 1)
struct FNiagaraSystemSpawnMultiInfo : public FNiagaraSystemSpawnAttachedInfo {
    FName SpawnRateVar; // 0x70
    float SpawnRateCutoffPercentage; // 0x78
    ENiagaraHelpersMultiSpawnRateType SpawnRateMethod; // 0x7c
    bool bCombineBoundsAndMultiSpawnRates; // 0x7d
    char pad_7e[0x2];
}; // Size: 0x80
#pragma pack(pop)
