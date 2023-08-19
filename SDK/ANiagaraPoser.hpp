#pragma once
#include <cstdint>
#include "AActor.hpp"
class UNiagaraPoserComponent;
class UNiagaraSystem;
#pragma pack(push, 1)
class ANiagaraPoser : public AActor {
public:
    UNiagaraPoserComponent* PoserComponent; // 0x248
    static ANiagaraPoser* StaticClass();
    void SetNiagaraSystem(UNiagaraSystem* NiagaraSystem, bool pAutoActivate);
    void Reset();
    UNiagaraSystem* GetNiagaraSystem();
}; // Size: 0x250
#pragma pack(pop)
