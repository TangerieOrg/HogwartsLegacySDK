#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UNiagaraSystem;
class UNiagaraComponent;
#pragma pack(push, 1)
class UablNiagaraPlayEffectTask : public UAblAbilityTask {
public:
    UNiagaraSystem* NiagaraVFX; // 0x70
    bool bAttachToWand; // 0x78
    bool bAttachToSocket; // 0x79
    char pad_7a[0x2];
    FName BlackboardKeyName; // 0x7c
    bool bDestroyAtTaskEnd; // 0x84
    char pad_85[0x3];
    float DestroyComponentDelay; // 0x88
    FName m_Socket; // 0x8c
    bool bUseSpawnRateMultiply; // 0x94
    char pad_95[0x3];
    float SpawnRateMultiply; // 0x98
    char pad_9c[0x14];
    static UablNiagaraPlayEffectTask* StaticClass();
    void DestroyNiagraEffects(UNiagaraComponent* InNiagaraComponent);
}; // Size: 0xb0
#pragma pack(pop)
