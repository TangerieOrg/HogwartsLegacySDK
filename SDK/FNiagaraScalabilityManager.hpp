#pragma once
#include <cstdint>
class UNiagaraEffectType;
class UNiagaraComponent;
#pragma pack(push, 1)
struct FNiagaraScalabilityManager {
    UNiagaraEffectType* EffectType; // 0x0
    TArray<UNiagaraComponent*> ManagedComponents; // 0x8
    char pad_18[0x80];
}; // Size: 0x98
#pragma pack(pop)
