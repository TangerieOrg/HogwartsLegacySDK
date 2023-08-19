#pragma once
#include <cstdint>
#include "FNiagaraDataSetCompiledData.hpp"
#include "FNiagaraVariable.hpp"
#pragma pack(push, 1)
struct FNiagaraEmitterCompiledData {
    TArray<FName> SpawnAttributes; // 0x0
    FNiagaraVariable EmitterSpawnIntervalVar; // 0x10
    FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x30
    FNiagaraVariable EmitterSpawnGroupVar; // 0x50
    FNiagaraVariable EmitterAgeVar; // 0x70
    FNiagaraVariable EmitterRandomSeedVar; // 0x90
    FNiagaraVariable EmitterInstanceSeedVar; // 0xb0
    FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xd0
    FNiagaraDataSetCompiledData DataSetCompiledData; // 0xf0
}; // Size: 0x130
#pragma pack(pop)
