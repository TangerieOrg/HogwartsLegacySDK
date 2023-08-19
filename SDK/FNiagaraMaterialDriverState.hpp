#pragma once
#include <cstdint>
class UNiagaraComponent;
#pragma pack(push, 1)
struct FNiagaraMaterialDriverState {
    UNiagaraComponent* NiagaraComponent; // 0x0
    FName EmitterName; // 0x8
    float Age; // 0x10
    bool bOwnsComponent; // 0x14
    bool bSystemFinished; // 0x15
    char pad_16[0x2];
}; // Size: 0x18
#pragma pack(pop)
