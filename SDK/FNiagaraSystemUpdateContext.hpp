#pragma once
#include <cstdint>
class UNiagaraComponent;
class UNiagaraSystem;
#pragma pack(push, 1)
struct FNiagaraSystemUpdateContext {
    TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
    TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
    TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20
    TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x30
    char pad_40[0x28];
}; // Size: 0x68
#pragma pack(pop)
