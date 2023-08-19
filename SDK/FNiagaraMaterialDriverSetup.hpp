#pragma once
#include <cstdint>
#include "FNiagaraMaterialDriverAttachSetup.hpp"
#include "FNiagaraMaterialDriverParameter.hpp"
class UNiagaraSystem;
#pragma pack(push, 1)
struct FNiagaraMaterialDriverSetup {
    UNiagaraSystem* NiagaraSystem; // 0x0
    char pad_8[0x28];
    FName UseSpecificEmitter; // 0x30
    TArray<FNiagaraMaterialDriverParameter> Parameters; // 0x38
    int32_t MaxParameterParticles; // 0x48
    FNiagaraMaterialDriverAttachSetup Attach; // 0x4c
    bool bAutoDestroy; // 0x6c
    char pad_6d[0x3];
    float InitialDelay; // 0x70
    char pad_74[0x4];
}; // Size: 0x78
#pragma pack(pop)
